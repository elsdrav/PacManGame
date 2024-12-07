#include "GameEngine.h"
#include "graphics.h"
#include <iostream>

// Constants for window size and title
const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;
const char *WINDOW_TITLE = "Pac-Man Game";

// Function prototypes
void configureGraphics();

int main() {
    try {
        // Step 1: Configure graphics settings
        configureGraphics();

        // Step 2: Create and initialize the game engine
        GameEngine engine;
        engine.init();

        // Step 3: Run the main game loop
        engine.run();
    } catch (const std::exception &ex) {
        // Catch and handle unexpected errors
        std::cerr << "An error occurred: " << ex.what() << std::endl;

        // Ensure graphics resources are properly cleaned up
        graphics::destroyWindow();
        return -1;
    }

    // Cleanup and successful exit
    graphics::destroyWindow();
    return 0;
}

void configureGraphics() {
    // Create the game window
    graphics::createWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE);

    // Optionally set a background color (e.g., black)
    graphics::Brush br;
    br.fill_color[0] = 0.0f; // Red component
    br.fill_color[1] = 0.0f; // Green component
    br.fill_color[2] = 0.0f; // Blue component
    graphics::setWindowBackground(br);

    // Debug log
    std::cout << "Graphics initialized successfully." << std::endl;
}
