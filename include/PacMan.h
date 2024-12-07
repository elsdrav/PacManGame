#ifndef PACMAN_H
#define PACMAN_H

#include "GameObject.h"
#include "graphics.h"

class PacMan : public GameObject {
private:
    float speed = 2.0f;  // Speed of movement

public:
    PacMan(); // Constructor

    void init(float startX = 100.0f, float startY = 100.0f);  // Initialize PacMan's position
    void move();  // Handle movement based on user input
    void draw();  // Draw PacMan to the screen
};

#endif // PACMAN_H
