#include "Menu.h"
#include "HighScores.h"
#include "graphics.h"


bool Menu::show() {
    bool running = true;

    while (running) {
        // Καθαρισμός οθόνης
        graphics::Brush br;
        graphics::clearWindow();

        // Σχεδίαση κουμπιών
        drawButton(300, 200, "Play Game");
        drawButton(300, 300, "High Scores");
        drawButton(300, 400, "Exit");

        // Ανάγνωση εισόδου χρήστη
        if (isButtonClicked(300, 200)) {
            return true; // Έναρξη παιχνιδιού
        } else if (isButtonClicked(300, 300)) {
            HighScores::display(); // Εμφάνιση σκορ
        } else if (isButtonClicked(300, 400)) {
            running = false; // Έξοδος
        }
    }

    return false; // Τερματισμός εφαρμογής
}

void Menu::drawButton(float x, float y, const std::string& text) {
    // Σχεδίαση κουμπιού με κείμενο
    graphics::Brush br;
    br.fill_color[0] = 0.2f;
}