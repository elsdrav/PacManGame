#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

#include "Menu.h"
#include "Maze.h"
#include "utilities.h"
#include "graphics.h"

class GameEngine {
public:
    void init();  // Αρχικοποίηση του παιχνιδιού
    void run();   // Κύριος βρόχος του παιχνιδιού
};

#endif // GAME_ENGINE_H
