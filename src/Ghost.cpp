#include "Ghost.h"

Ghost::Ghost(float startX, float startY) : GameObject("Ghost", startX, startY) {}

void Ghost::move() {
    // Example: Move ghost randomly (you can replace this with smarter AI)
    x += (rand() % 3 - 1) * speed;  // Random x movement
    y += (rand() % 3 - 1) * speed;  // Random y movement
}

void Ghost::draw() {
    // Draw ghost to the screen
    graphics::Brush br;
    br.fill_color[0] = 1.0f; // Red color for Ghost
    br.fill_color[1] = 0.0f;
    br.fill_color[0] = 0.0f;
    graphics::drawDisk(x, y, radius, br);  // Use inherited x, y, and radius
}
