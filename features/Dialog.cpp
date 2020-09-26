#define DEFINE_DIALOG_VARS
#include <windowsx.h>
#include "headers/common.h"
#include "headers/feature.h"
#include "headers/dialog.h"
#include "headers/remote.h"

std::vector<Dialog*> dialogs;

bool inRect(int x, int y, RECT r) {
    return x >= r.left && x <= r.right && y >= r.top && y <= r.bottom;
}

Element::Element() {}

Element::~Element() {
    for (Element* child : children) {
        delete child;
    }
}

RECT Element::getRect() {
    return { pos.left, pos.top, pos.right, pos.bottom };
}

RECT Element::getRect(int ox, int oy) {
    return { ox + pos.left, oy + pos.top, ox + pos.right, oy + pos.bottom };
}

void Element::setPos(int x, int y) {
    this->pos.left = x;
    this->pos.top = y;

    this->pos.right = this->pos.left + this->width;
    this->pos.bottom = this->pos.top + this->height;
}

void Element::setDimensions(int width, int height) {
    this->width = width;
    this->height = height;

    this->pos.right = this->pos.left + this->width;
    this->pos.bottom = this->pos.top + this->height;
}

void Element::setFrame(int backgroundColor, int backgroundOpacity, int borderColor) {
    this->backgroundColor = backgroundColor;
    this->backgroundOpacity = backgroundOpacity;
    this->borderColor = borderColor;
}

void Element::addLine(POINT a, POINT b, int color, int opacity) {
    lines.push_back({ a, b, color, opacity });
}

void Element::getLinesCallback(std::function<std::vector<LineInfo>(std::vector<LineInfo> lines)> drawLinesCallback) {
    this->drawLinesCallback = drawLinesCallback;
}

void Element::show() {
    visible = true;
}

void Element::hide() {
    visible = false;
}

void Element::setVisibile(bool value) {
    visible = value;
}

bool Element::isVisible() {
    return visible;
}

void Element::addChild(Element* child) {
    children.push_back(child);
}

void Element::onClick(std::function<void(MouseButton button, bool down)> handler) {
    clickCallback = handler;
}

void Element::onKey(std::function<void(DWORD keyCode, bool down, DWORD flags)> handler) {
    keyHandler = handler;
}

void Element::drawFrame(int ox, int oy) {
    if (!visible) return;

    if (backgroundColor >= 0 && backgroundOpacity > 0) {
        D2::DrawSolidRectAlpha(ox + pos.left, oy + pos.top, ox + pos.right, oy + pos.bottom, backgroundColor, backgroundOpacity);
    }

    if (borderColor >= 0) {
        RECT b = { ox + pos.left, oy + pos.top, ox + pos.right, oy + pos.bottom };
        D2::DrawRect(&b, borderColor);
    }

    for (LineInfo line : (drawLinesCallback ? drawLinesCallback(lines) : lines)) {
        D2::DrawLine(ox + pos.left + line.a.x, oy + pos.top + line.a.y, ox + pos.left + line.b.x, oy + pos.top + line.b.y, line.color, line.opacity);
    }
}

void Element::drawChildren(int ox, int oy) {
    if (!visible) return;

    ox += pos.left;
    oy += pos.top;

    for (Element* child : children) {
        child->draw(ox, oy);
    }
}

void Element::draw(int ox, int oy) {
    drawFrame(ox, oy);
    drawChildren(ox, oy);
};

bool Element::inArea(int x, int y) {
    return visible && inRect(x, y, pos);
};

bool Element::interact(int x, int y, bool down, MouseButton button) {
    if (inArea(x, y)) {
        for (Element* child : children) {
            if (child->interact(x - pos.left, y - pos.top, down, button)) {
                return true;
            }
        }

        if (clickCallback) {
            clickCallback(button, down);
            return true;
        }
    }

    return false;
};

void Element::interactKey(DWORD keyCode, bool down, DWORD flags){
    for (Element* child : children) {
        child->interactKey(keyCode, down, flags);
    }

    if (keyHandler) {
        keyHandler(keyCode, down, flags);
    }
};

void TextElement::setFont(int value) {
    font = value;
}

void TextElement::setColor(int value) {
    color = value;
}

void TextElement::setText(std::wstring value) {
    textCallback = [=]() -> std::wstring { return value; };
}

void TextElement::setOrientation(Orientation value) {
    orientation = value;
}

void TextElement::setText(std::function<std::wstring()> callback) {
    textCallback = callback;
}

void TextElement::setTextOffset(int x, int y) {
    textOffsetX = x;
    textOffsetY = y;
}

void TextElement::draw(int ox, int oy) {
    if (!visible) return;

    Element::drawFrame(ox, oy);

    DWORD fileno = font, w = 0, h = 0;
    std::wstring message = textCallback();
    D2::SetFont(fileno);
    h = D2::GetTextSize(message.c_str(), &w, &fileno);
    int cy = (pos.top + pos.bottom + h) / 2;

    switch (orientation) {
    case Orientation::RIGHT:
        D2::DrawGameText(message.c_str(), ox + textOffsetX + pos.right - w, oy + textOffsetY + cy, color, 0);
        break;
    case Orientation::CENTER:
        D2::DrawGameText(message.c_str(), ox + textOffsetX + (pos.left + pos.right - w) / 2, oy + textOffsetY + cy, color, 0);
        break;
    default:
        D2::DrawGameText(message.c_str(), ox + textOffsetX + pos.left, oy + textOffsetY + cy, color, 0);
        break;
    }

    Element::drawChildren(oy, ox);
}

Dialog::Dialog() : Element() {
    backgroundColor = 0;
    backgroundOpacity = 0xD0;
    borderColor = 0xD;
    dialogs.push_back(this);
}

bool Dialog::interact(int x, int y, bool down, MouseButton button) {
    if (inArea(x, y)) {
        for (Element* child : children) {
            if (child->interact(x - pos.left, y - pos.top, down, button)) {
                return true;
            }
        }

        if (clickCallback) {
            clickCallback(button, down);
        }

        return true;
    }

    return false;
};

namespace Template {

    class : public Feature {
    public:
        void allPostDraw() {
            for (Dialog* dialog : dialogs) {
                dialog->draw(D2::ScreenWidth / 2, D2::ScreenHeight / 2);
            }
        }

        bool windowMessage(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
            bool allowDefault = true;

            switch (uMsg) {
            case WM_KEYDOWN:
            case WM_SYSKEYDOWN:
                if (!(lParam & 0x40000000) && wParam != VK_F4) {
                    for (auto rit = dialogs.rbegin(); rit != dialogs.rend(); ++rit) {
                        Dialog* dialog = *rit;
                        allowDefault = allowDefault && !dialog->isVisible();
                    }
                }

                for (auto rit = dialogs.rbegin(); rit != dialogs.rend(); ++rit) {
                    Dialog* dialog = *rit;
                    if (dialog->isVisible()) {
                        dialog->interactKey(wParam, uMsg == WM_KEYDOWN, lParam);
                    }
                }

                break;
            case WM_XBUTTONDBLCLK:
            case WM_XBUTTONDOWN:
            case WM_XBUTTONUP:
                for (auto rit = dialogs.rbegin(); rit != dialogs.rend(); ++rit) {
                    Dialog* dialog = *rit;
                    if (dialog->inArea(GET_X_LPARAM(lParam) - D2::ScreenWidth / 2, GET_Y_LPARAM(lParam) - D2::ScreenHeight / 2)) {
                        return false;
                    }

                    allowDefault = allowDefault && !dialog->isVisible();
                }

                break;
            case WM_RBUTTONDBLCLK:
            case WM_RBUTTONDOWN:
                for (auto rit = dialogs.rbegin(); rit != dialogs.rend(); ++rit) {
                    Dialog* dialog = *rit;
                    if (dialog->interact(GET_X_LPARAM(lParam) - D2::ScreenWidth / 2, GET_Y_LPARAM(lParam) - D2::ScreenHeight / 2, true, MouseButton::RIGHT)) {
                        return false;
                    }

                    allowDefault = allowDefault && !dialog->isVisible();
                }

                break;
            case WM_LBUTTONDBLCLK:
            case WM_LBUTTONDOWN:
                for (auto rit = dialogs.rbegin(); rit != dialogs.rend(); ++rit) {
                    Dialog* dialog = *rit;
                    if (dialog->interact(GET_X_LPARAM(lParam) - D2::ScreenWidth / 2, GET_Y_LPARAM(lParam) - D2::ScreenHeight / 2, true, MouseButton::LEFT)) {
                        return false;
                    }

                    allowDefault = allowDefault && !dialog->isVisible();
                }

                break;
            case WM_MBUTTONDBLCLK:
            case WM_MBUTTONDOWN:
                for (auto rit = dialogs.rbegin(); rit != dialogs.rend(); ++rit) {
                    Dialog* dialog = *rit;
                    if (dialog->interact(GET_X_LPARAM(lParam) - D2::ScreenWidth / 2, GET_Y_LPARAM(lParam) - D2::ScreenHeight / 2, true, MouseButton::MIDDLE)) {
                        return false;
                    }

                    allowDefault = allowDefault && !dialog->isVisible();
                }

                break;
            case WM_RBUTTONUP:
                for (auto rit = dialogs.rbegin(); rit != dialogs.rend(); ++rit) {
                    Dialog* dialog = *rit;
                    if (dialog->interact(GET_X_LPARAM(lParam) - D2::ScreenWidth / 2, GET_Y_LPARAM(lParam) - D2::ScreenHeight / 2, false, MouseButton::RIGHT)) {
                        return false;
                    }

                    allowDefault = allowDefault && !dialog->isVisible();
                }

                break;
            case WM_LBUTTONUP:
                for (auto rit = dialogs.rbegin(); rit != dialogs.rend(); ++rit) {
                    Dialog* dialog = *rit;
                    if (dialog->interact(GET_X_LPARAM(lParam) - D2::ScreenWidth / 2, GET_Y_LPARAM(lParam) - D2::ScreenHeight / 2, false, MouseButton::LEFT)) {
                        return false;
                    }

                    allowDefault = allowDefault && !dialog->isVisible();
                }

                break;
            case WM_MBUTTONUP:
                for (auto rit = dialogs.rbegin(); rit != dialogs.rend(); ++rit) {
                    Dialog* dialog = *rit;
                    if (dialog->interact(GET_X_LPARAM(lParam) - D2::ScreenWidth / 2, GET_Y_LPARAM(lParam) - D2::ScreenHeight / 2, false, MouseButton::MIDDLE)) {
                        return false;
                    }

                    allowDefault = allowDefault && !dialog->isVisible();
                }

                break;
            }

            return allowDefault;
        }
    } feature;

}
