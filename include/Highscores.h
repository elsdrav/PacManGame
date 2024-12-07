#ifndef HIGH_SCORES_H
#define HIGH_SCORES_H

#include <string>

class HighScores {
public:
    static void display();     // Εμφάνιση υψηλών σκορ
    static void save(int score); // Αποθήκευση νέου σκορ
};

#endif // HIGH_SCORES_H
