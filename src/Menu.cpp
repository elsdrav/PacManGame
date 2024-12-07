#include "GameEngine.h"
//#include "Menu.h"
#include "graphics.h"
#include <iostream>

// Constants for window size
const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;

// Function to initialize the SGG library and configure graphics
void initializeGraphics();

int main() {
    try {
        // Step 1: Initialize graphics settings
        initializeGraphics();

        // Step 2: Create and initialize the game engine
        GameEngine engine;
        engine.init();

        // Step 3: Start the main game loop
        engine.run();

        // Step 4: Clean up graphics resources after the game ends
        graphics::destroyWindow();

    } catch (const std::exception &ex) {
        // Catch and display errors
        std::cerr << "An error occurred: " << ex.what() << std::endl;
        graphics::destroyWindow(); // Ensure window resources are freed
        return -1; // Return a non-zero value to indicate failure
    }

    return 0; // Indicate successful program termination
}

// Function to initialize graphics and set up the game window
void initializeGraphics() {
    // Create the game window
    graphics::createWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Pac-Man Game");

    // Clear the window by setting the background
    graphics::Brush br;
    br.fill_color[0] = 0.0f; // Red
    br.fill_color[1] = 0.0f; // Green
    br.fill_color[2] = 0.0f; // Blue (black background)
    graphics::setWindowBackground(br);  // Set background color

    // Print a success message
    std::cout << "Graphics initialized successfully." << std::endl;
}
