#pragma once

#include <windows.h>
#include <functional>
#include <vector>
#include <string>

bool inRect(int x, int y, RECT r);

enum class MouseButton {
    LEFT,
    RIGHT,
    MIDDLE,
};

enum class Orientation {
    LEFT,
    RIGHT,
    CENTER,
};

struct LineInfo {
    POINT a, b;
    int color, opacity;
};

class Element {
protected:
    RECT pos = { 0, 0, 0, 0 };
    int width = 0, height = 0, backgroundColor = -1, backgroundOpacity = 192, borderColor = -1;
    std::function<void(MouseButton button, bool down)> clickCallback;
    bool visible = false;
    std::vector<Element*> children;
    std::vector<LineInfo> lines;
    std::function<std::vector<LineInfo>(std::vector<LineInfo> lines)> drawLinesCallback;

public:
    Element();
    RECT getRect();

    RECT getRect(int ox, int oy);
    void setPos(int x, int y);
    void setDimensions(int width, int height);
    void setFrame(int backgroundColor, int backgroundOpacity, int borderColor);
    void addLine(POINT a, POINT b, int color, int opacity = 0xFF);
    void getLinesCallback(std::function<std::vector<LineInfo>(std::vector<LineInfo> lines)> drawLinesCallback);
    void show();
    void hide();
    void setVisibile(bool value);
    bool isVisible();
    void addChild(Element* child);
    void onClick(std::function<void(MouseButton button, bool down)> handler);
    virtual void drawFrame(int ox, int oy);
    virtual void drawChildren(int ox, int oy);
    virtual void draw(int ox, int oy);
    bool inArea(int x, int y);
    virtual bool interact(int x, int y, bool down, MouseButton button);
};

class TextElement : public Element {
protected:
    std::function<std::wstring()> textCallback = []() -> std::wstring { return L"Text Element"; };
    int font = 0, color = 4, textOffsetX = -4, textOffsetY = 0;
    Orientation orientation = Orientation::LEFT;

public:
    void setFont(int value);
    void setColor(int value);
    void setText(std::wstring value);
    void setOrientation(Orientation value);
    void setText(std::function<std::wstring()> callback);
    void setTextOffset(int x, int y);
    virtual void draw(int ox, int oy);
};

class Dialog : public Element {
public:
    Dialog();
    virtual bool interact(int x, int y, bool down, MouseButton button);
};

#ifndef DEFINE_DIALOG_VARS
extern std::vector<Dialog*> dialogs;
#endif