#include "PacMan.h"
#include "graphics.h"


PacMan::PacMan() : GameObject("PacMan") {}

void PacMan::move() {
    // Κίνηση ανάλογα με την είσοδο του χρήστη
    if (graphics::getKeyState(graphics::SCANCODE_UP)) {
        y -= speed;
    }
    if (graphics::getKeyState(graphics::SCANCODE_DOWN)) {
        y += speed;
    }
    if (graphics::getKeyState(graphics::SCANCODE_LEFT)) {
        x -= speed;
    }
    if (graphics::getKeyState(graphics::SCANCODE_RIGHT)) {
        x += speed;
    }
}

void PacMan::draw() {
    // Σχεδίαση του Pac-Man
    graphics::Brush br;
    br.fill_color[0] = 1.0f; // Κίτρινο
    br.fill_color[1] = 1.0f;
    br.fill_color[2] = 0.0f;
    graphics::drawDisk(x, y, radius, br);
}
