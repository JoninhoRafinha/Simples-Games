#pragma region Includes

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#pragma endregion

#pragma region Structs

typedef struct Scoreboard {
    int game;
    char name[4];
    int score;
    struct Scoreboard *next;
} Scoreboard;

#pragma endregion

#pragma region Function Signs

#pragma region Menus

void mainMenu();
void selectGame();
void scoreboardMenu();
void playAgainMenu(int numberGame);
void endGameMenu(int numberGame, int points);

#pragma endregion

#pragma region Scoreboard

void scoreboardRead();
void scoreboardWrite();
void scoreboardPrint(int numberGame);
Scoreboard* scoreboardAdd(int numberGame, char* gamerName, int gamerScore);
void scoreboardInsert(Scoreboard* newScoreboard);
void scoreboardReversed();
void scoreGameAdd(int numberGame, char* gamerName, int gamerScore);

#pragma endregion

#pragma region Extra Functions

int getChoice(int min, int max);
int randomInt(int min, int max);
char* getChar();

#pragma endregion

#pragma region Guess the Number

void guessNumber();

#pragma endregion

#pragma region Guess the Card

void guessCard();

#pragma endregion

#pragma region TicTacToe

void tictactoe();
void printBoard();
int checkWin();
void playerVSplayer();
void playerVScomputer();

#pragma endregion

#pragma endregion