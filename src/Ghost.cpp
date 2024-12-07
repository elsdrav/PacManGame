#include "Ghost.h"
#include "graphics.h"


Ghost::Ghost(float startX, float startY) : GameObject("Ghost"), x(startX), y(startY) {}

void Ghost::move() {
    // Κίνηση με τυχαίο μοτίβο ή AI
    x += (rand() % 3 - 1) * speed;
    y += (rand() % 3 - 1) * speed;
}

void Ghost::draw() {
    // Σχεδίαση φαντάσματος
    graphics::Brush br;
    br.fill_color[0] = 1.0f; // Κόκκινο
    br.fill_color[1] = 0.0f;
    br.fill_color[2] = 0.0f;
    graphics::drawDisk(x, y, radius, br);
}
