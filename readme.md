# Charon

This is an experiment and utility for Diablo 2. It is intended for single player and TCP/IP game use, so connections to Battle.net are disabled. It's main features include:

    Ladder Runewords and Unique Items in Single Player and TCP/IP
    Gently Improved Drop Rates with Respect to Single Player
    Gently Improved Rune Drop Rates with Respect to Single Player
    Map Reveal (more information now)
    Display Monsters, Missiles, and Items (superior and above) on Automap
    Updated Item Tooltips and Item Level Display
    /players X uncap (16-20 is reasonable, but very difficult)
    Force socket quest available with: /socket
    Force respec quest available with: /respec
    Force imbue quest available with: /imbue
    Force cow portal available with: /cows
    Improved experience scaling for /players X by typing: /xp
    Weather toggle (press insert key)
    Always in Direct 3D Mode
    Loading additional mpq via command line parameter: -mpq "filename.mpq"

A note about 'Always in Direct 3D Mode':
    This feature causes the game to ignore command line flags that control the video, such as `-w`. The game now starts windowed every time, and you can toggle full screen mode on and off by holding Alt and pressing Enter (Alt+Enter). We're currently trying to understand how the game uses the rendering API, and we'll be looking to update the renderer to newer APIs, since the game currently uses DirectDraw v7 and Direct3D v3.

# Instructions

- Download Charon.zip from the releases tab.
- Unzip Charon.zip to your Diablo 2 directory (Game.exe should be here).
- Create a shortcut to Game.exe
- Edit the shortcut and add this at the very end of the 'target' line:  -loaddll Charon.dll

Now you can run the game using the new shortcut and it will load Charon automatically!

Note: Do not try to run Charon with any other Diablo 2 modifications. It will most likely crash!

# Compiling

To use Charon you'll need to compile it with Visual Studio 2019. Once you've compiled Charon you must load Charon.dll into the game using [DLL Loader](https://github.com/Nishimura-Katsuo/DLLLoader). Loading it with traditional injection techniques may work, but will most likely crash or not function properly, since this is written to operate completely on Diablo 2's main thread for stability.

A lot of hard work is being put in by us at [Blizzhackers](https://github.com/blizzhackers) to bring you this tool with love.

>I see him there at the oars of his little boat in the lake, the ferryman of the dead, Charon, with his hand upon the oar and he calls me now. ~Alcestis (from Alcestis by Euripides)
