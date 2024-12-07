#ifndef GHOST_H
#define GHOST_H

#include "GameObject.h"
#include "graphics.h"

class Ghost : public GameObject {
private:
    float speed = 1.5f;  // Speed of ghost movement

public:
    Ghost(float startX, float startY);  // Constructor with position initialization

    void move();  // Move ghost randomly or follow PacMan
    void draw();  // Draw ghost to the screen
};

#endif // GHOST_H
