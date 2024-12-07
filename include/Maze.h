#ifndef MAZE_H
#define MAZE_H

#include "PacMan.h"
#include "Ghost.h"
#include <vector>

class Maze {
private:
    PacMan pacman;                      // PacMan object
    std::vector<Ghost> ghosts;          // List of Ghost objects
    bool gameOver = false;              // Flag to track game over state

    // Private methods to generate maze and check collisions
    void generateMaze();
    void checkCollisions();

public:
    Maze();                             // Constructor to initialize maze
    void init();                        // Method to initialize maze and objects
    bool update();                      // Method to update game state (move pacman, ghosts, etc.)
    void draw();                        // Method to draw maze and objects on the screen
    void drawMaze();                    // Method to draw the maze layout
};

#endif // MAZE_H
