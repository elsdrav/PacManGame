#include "Maze.h"
#include "graphics.h"

// Constructor for Maze, initializes the maze (could be empty or basic for now)
Maze::Maze() {
    // Initialize ghosts or pacman if needed
}

// Initialize the maze and game objects
void Maze::init() {
    // Generate the maze layout
    generateMaze();

    // Initialize PacMan
    pacman.init();  // Assuming PacMan has an init method

    // Initialize ghosts
    ghosts.push_back(Ghost(100, 100)); // Example: Add ghosts at specific positions
    ghosts.push_back(Ghost(150, 150)); // Example
    ghosts.push_back(Ghost(200, 200)); // Example
}

// Update game state
bool Maze::update() {
    // Update PacMan's position
    pacman.move();

    // Update each ghost's position
    for (auto& ghost : ghosts) {
        ghost.move();
    }

    // Check for collisions
    checkCollisions();

    // Return false if the game is over, true if the game continues
    return !gameOver;
}

// Draw the maze and objects
void Maze::draw() {
    // Draw the maze layout
    drawMaze();

    // Draw PacMan
    pacman.draw();

    // Draw each ghost
    for (auto& ghost : ghosts) {
        ghost.draw();
    }
}

// Generate the maze layout (you can extend this with actual maze generation logic)
void Maze::generateMaze() {
    // Example: Simply draw a grid as a placeholder
    graphics::Brush br;
    br.fill_color[0] = 1.0f; // Red color for walls
    br.fill_color[1] = 1.0f;
    br.fill_color[2] = 1.0f;

    // Draw some walls (you can later replace this with an actual maze generation algorithm)
    graphics::drawRect(100, 100, 50, 50, br); // Example wall block
    graphics::drawRect(150, 100, 50, 50, br); // Example wall block
    // Add more walls as needed
}

// Check for collisions (between PacMan and ghosts, etc.)
void Maze::checkCollisions() {
    // Example collision detection logic
    for (auto& ghost : ghosts) {
        if (pacman.collidesWith(ghost)) {  // Assuming PacMan has a collision detection method
            gameOver = true; // End game if a collision occurs
            break;
        }
    }
}

// Draw the maze layout
void Maze::drawMaze() {
    // Placeholder for drawing the maze layout
    graphics::Brush br;
    br.fill_color[0] = 0.0f; // Blue color for maze background
    br.fill_color[1] = 0.0f;
    br.fill_color[2] = 1.0f;

    // Example: Draw the background or maze walls here
    graphics::drawRect(50, 50, 700, 500, br); // Example: background of the maze
}
