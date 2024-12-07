#include "HighScores.h"
#include <fstream>

void HighScores::display() {
    // Εμφάνιση αποθηκευμένων σκορ
    std::ifstream infile("scores.txt");
    std::string score;
    while (std::getline(infile, score)) {
        std::cout << score << std::endl;
    }
}

void HighScores::save(int score) {
    // Αποθήκευση νέου σκορ
    std::ofstream outfile("scores.txt", std::ios::app);
    outfile << score << std::endl;
}
