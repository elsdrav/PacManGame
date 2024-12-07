#include "Maze.h"
#include "graphics.h"


void Maze::init() {
    // Δημιουργία του λαβύρινθου και αρχικοποίηση
    generateMaze();
}

bool Maze::update() {
    // Ενημέρωση Pac-Man και φαντασμάτων
    pacman.move();
    for (auto& ghost : ghosts) {
        ghost.move();
    }

    // Έλεγχος συγκρούσεων
    checkCollisions();

    // Συνθήκη τερματισμού
    return !gameOver;
}

void Maze::draw() {
    // Σχεδίαση λαβύρινθου και αντικειμένων
    drawMaze();
    pacman.draw();
    for (auto& ghost : ghosts) {
        ghost.draw();
    }
}
