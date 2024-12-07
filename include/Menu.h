#ifndef MENU_H
#define MENU_H

#include <string>
#include "graphics.h"

class Menu {
public:
    bool show();  // Εμφάνιση του μενού
private:
    void drawButton(float x, float y, const std::string& text); // Σχεδίαση κουμπιού
    bool isButtonClicked(float x, float y); // Έλεγχος αν έγινε κλικ σε κουμπί
};

#endif // MENU_H
