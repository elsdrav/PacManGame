#include "GameEngine.h"
#include "Menu.h"
#include "Maze.h"
#include "PacMan.h"
#include "graphics.h"


void GameEngine::init() {
    // Αρχικοποίηση βιβλιοθήκης SGG
    graphics::createWindow(800, 600, "Pac-Man");
}

void GameEngine::run() {
    Menu menu;
    while (menu.show()) {  // Εμφάνιση του μενού
        Maze maze;
        maze.init();
        while (maze.update()) { // Ενημέρωση παιχνιδιού
            maze.draw();
        }
    }
    graphics::destroyWindow();
}
