#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

#include <string>

class GameObject {
protected:
    std::string name;  // Name of the object
    float x, y;        // Position of the object
    float radius;      // Radius for collision detection or drawing purposes

public:
    GameObject(const std::string& name = "", float startX = 0.0f, float startY = 0.0f, float r = 15.0f) 
        : name(name), x(startX), y(startY), radius(r) {}

    virtual void move() = 0;  // Virtual function for movement
    virtual void draw() = 0;  // Virtual function for drawing
    virtual ~GameObject() {}   // Virtual destructor

    // Getter methods for position and radius
    float getX() const { return x; }
    float getY() const { return y; }
    float getRadius() const { return radius; }

    // Optional: setter methods for position if needed
    void setPosition(float newX, float newY) {
        x = newX;
        y = newY;
    }

    // Check if this object collides with another GameObject
    bool collidesWith(const GameObject& other) {
        float dx = x - other.x;
        float dy = y - other.y;
        float distance = std::sqrt(dx * dx + dy * dy);
        return distance < (radius + other.radius);  // Simple collision detection
    }
};

#endif // GAME_OBJECT_H
