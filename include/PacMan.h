#ifndef PAC_MAN_H
#define PAC_MAN_H

#include "GameObject.h"
#include "graphics.h"

class PacMan : public GameObject {
private:
    float x = 100.0f; // Θέση x
    float y = 100.0f; // Θέση y
    float radius = 15.0f; // Ακτίνα του Pac-Man
    float speed = 2.0f;   // Ταχύτητα κίνησης

public:
    PacMan();
    void move();  // Ενημέρωση θέσης
    void draw();  // Σχεδίαση Pac-Man
};

#endif // PAC_MAN_H
