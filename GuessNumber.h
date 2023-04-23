#ifndef GUESSNUMBER_H
#define GUESSNUMBER_H
#include <iostream>
#include <list>

using namespace std;


struct Player
{
    string name;
    int attemptCounter { 0 };
    bool win {false};
};


class GuessNumber
{
    enum MainMenu
    {
        Play = 1,
        level,
        Scores,
        Exit
    };
    enum MenuLevel {
        Easy = 1,
        Normal,
        Hard,
        PlayerLevel,
        Back,
    };
    enum MenuHighScore {
        PlayGame = 1,
        MainMenu,
        clear,
        ExitGame
    };


public:
    GuessNumber();
    ~GuessNumber();

    Player getPlayer();

    void menu();
    void play();
    void menuLevel();
    void menuScors();
    void clearScores();

    list<pair<int, string>> takeScors();
    void writeScores(list<pair<int, string>> scors);

private:
    Player player;
    list<pair<int, string>> scores;
    string retreat;
    int rangeValue;
};



#endif // GUESSNUMBER_H
