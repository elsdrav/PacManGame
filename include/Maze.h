#ifndef MAZE_H
#define MAZE_H

#include "PacMan.h"
#include "Ghost.h"
#include <vector>

class Maze {
private:
    PacMan pacman;                // Pac-Man
    std::vector<Ghost> ghosts;    // Λίστα φαντασμάτων
    bool gameOver = false;        // Κατάσταση παιχνιδιού

    void generateMaze();          // Δημιουργία λαβύρινθου
    void checkCollisions();       // Έλεγχος για συγκρούσεις
    void drawMaze();              // Σχεδίαση του λαβύρινθου

public:
    void init();
