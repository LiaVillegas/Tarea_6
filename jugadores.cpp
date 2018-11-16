#include "libraries.h"

void Player1(){
    int i, j;
    cout << "Jugador 1 'X' ingrese posicion de jugada" << endl;
    cout << "Fila: ";
    cin >> i;
    cout << "Columna: ";
    cin >> j;

    if (i>3 || j>3){

        cout << "Esta posicion no exite" << endl;
    } else{
        board[i][j]='X';
        Draw();
    }
    Win();
}


void Player2(){
    int k, l;
    cout << "Jugador 2 'O' ingrese posicion de jugada" << endl;
    cout << "Fila: ";
    cin >> k;
    cout << "Columna: ";
    cin >> l;

    if (k>3 || l>3){

        cout << "Esta posicion no exite" << endl;
    } else{
        board[k][l]='O';
        Draw();
    }
    Win();
}
