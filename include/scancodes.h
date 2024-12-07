#ifndef SCANCODES_H
#define SCANCODES_H

namespace graphics {

    // Σταθερές για κάθε πλήκτρο
    constexpr int SCANCODE_UP = 82;
    constexpr int SCANCODE_DOWN = 81;
    constexpr int SCANCODE_LEFT = 80;
    constexpr int SCANCODE_RIGHT = 79;
    constexpr int SCANCODE_SPACE = 44;
    constexpr int SCANCODE_A = 4;
    constexpr int SCANCODE_S = 22;
    constexpr int SCANCODE_D = 7;
    constexpr int SCANCODE_W = 26;

    // Ποντίκι
    enum MouseButton {
        BUTTON_LEFT = 0,
        BUTTON_RIGHT = 1,
        BUTTON_MIDDLE = 2
    };
}

#endif // SCANCODES_H