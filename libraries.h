#ifndef LIBRARIES_H
#define LIBRARIES_H

#include <iostream>
#include <stdio.h>

using namespace std;

char player1 = 'X';
char player2 = 'O';
const int n=3;
const int m=3;
char board [n][m];


int Win();
void Player1();
void Player2();
void Draw();


#endif // LIBRARIES_H
