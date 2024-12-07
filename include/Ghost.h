#ifndef GHOST_H
#define GHOST_H

#include "GameObject.h"
#include "graphics.h"
#include <cstdlib> // Για τη χρήση της rand()

class Ghost : public GameObject {
private:
    float x, y;       // Θέση
    float radius = 15.0f; // Ακτίνα φαντάσματος
    float speed = 1.5f;   // Ταχύτητα κίνησης

public:
    Ghost(float startX, float startY);
    void move();  // Κίνηση φαντάσματος
    void draw();  // Σχεδίαση φαντάσματος
};

#endif // GHOST_H
