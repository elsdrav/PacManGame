#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

#include <string>

class GameObject {
protected:
    std::string name;  // Όνομα του αντικειμένου
public:
    GameObject(const std::string& name = "") : name(name) {}
    virtual void move() = 0;  // Εικονική συνάρτηση για κίνηση
    virtual void draw() = 0;  // Εικονική συνάρτηση για σχεδίαση
    virtual ~GameObject() {}  // Εικονικός καταστροφέας
};

#endif // GAME_OBJECT_H