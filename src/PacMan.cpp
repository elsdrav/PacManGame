#include "PacMan.h"
#include "graphics.h"

PacMan::PacMan() : GameObject("PacMan") {}

void PacMan::init(float startX, float startY) {
    // Initialize the position of PacMan (sets x, y, and radius from GameObject)
    x = startX;
    y = startY;
}

void PacMan::move() {
    // Move PacMan based on user input
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
    // Draw PacMan to the screen
    graphics::Brush br;
    br.fill_color[0] = 1.0f; // Yellow color for PacMan
    br.fill_color[1] = 1.0f;
    br.fill_color[2] = 0.0f;
    graphics::drawDisk(x, y, radius, br);  // Use inherited x, y, and radius
}
