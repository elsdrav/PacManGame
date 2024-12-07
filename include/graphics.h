#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <string>

// Namespace για τις λειτουργίες γραφικών
namespace graphics {

    // Δομή για να ρυθμίζουμε τις παραμέτρους σχεδίασης
    struct Brush {
        float fill_color[3] = {0.0f, 0.0f, 0.0f}; // Χρώμα γεμίσματος (RGB)
        float outline_color[3] = {0.0f, 0.0f, 0.0f}; // Χρώμα περιγράμματος
        float outline_width = 1.0f; // Πάχος περιγράμματος
        std::string texture = ""; // Εικόνα για χρήση ως υφή
    };

    // Δημιουργία/καταστροφή παραθύρου
    void createWindow(int width, int height, const std::string& title);
    void destroyWindow();

    // Καθαρισμός και χρωματισμός φόντου
    void clearWindow();
    void setWindowBackground(const Brush& brush);

    // Σχεδίαση βασικών σχημάτων
    void drawRect(float x, float y, float width, float height, const Brush& brush);
    void drawDisk(float x, float y, float radius, const Brush& brush);
    void drawText(float x, float y, float size, const std::string& text, const Brush& brush);

    // Ανίχνευση εισόδου χρήστη
    bool getKeyState(int scancode); // Επιστροφή κατάστασης πλήκτρου
    bool getMouseButtonState(int button); // Επιστροφή κατάστασης κουμπιού ποντικιού
}

#endif // GRAPHICS_H
