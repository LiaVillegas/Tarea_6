#include "libraries.h"

int Win(){


       if(board[0][0]== board[0][1] && board[0][1]==board[0][2]&& board[0][0]=='X'){
              cout<<"Jugador 1, has ganado la partida!!" << endl;
              return 0;
              }

       if(board[0][0]== board[0][1] && board[0][1]==board[0][2]&& board[0][0]=='O'){
              cout <<"Jugador 2, has ganado la partida!!" << endl;
              return 0;
              }


       if(board[1][0]== board[1][1] && board[1][1]==board[1][2]&& board[1][0]=='X'){
              cout <<"Jugador 1, has ganado la partida!!" << endl;
              return 0;
              }


       if(board[1][0]== board[1][1] && board[1][1]==board[1][2]&& board[1][0]=='O'){
              cout <<"Jugador 2, has ganado la partida!!" << endl;
              return 0;
              }



       if(board[2][0]== board[2][1] && board[2][1]==board[2][2]&& board[2][0]=='X'){
              cout <<"Jugador 1, has ganado la partida!!" << endl;
              return 0;
              }


       if(board[2][0]== board[2][1] && board[2][1]==board[2][2]&& board[2][0]=='O'){
              cout <<"Jugador 2, has ganado la partida!!" << endl;
              return 0;
              }



       if(board[0][0]== board[1][0] && board[1][0]==board[2][0]&& board[0][0]=='X'){
              cout <<"Jugador 1, has ganado la partida!!" << endl;
              return 0;
              }


       if(board[0][0]== board[1][0] && board[1][0]==board[2][0]&& board[0][0]=='O'){
              cout <<"Jugador 2, has ganado la partida!!" << endl;
              return 0;
              }


       if(board[0][1]== board[1][1] && board[1][1]==board[2][1]&& board[0][1]=='X'){
              cout <<"Jugador 1, has ganado la partida!!" << endl;
              return 0;
              }


       if(board[0][1]== board[1][1] && board[1][1]==board[2][1]&& board[0][1]=='O'){
              cout <<"Jugador 2, has ganado la partida!!" << endl;
              return 0;
              }


       if(board[0][2]== board[1][2] && board[2][2]==board[2][2]&& board[0][2]=='X'){
              cout <<"Jugador 1, has ganado la partida!!" << endl;
              return 0;
              }


       if(board[0][2]== board[1][2] && board[2][2]==board[2][2]&& board[0][2]=='O'){
              cout <<"Jugador 2, has ganado la partida!!" << endl;
              return 0;
              }


       if(board[2][0]== board[1][1] && board[1][1]==board[0][2]&& board[2][0]=='X'){
             cout <<"Jugador 1, has ganado la partida!!" << endl;
             return 0;
             }

       if(board[2][0]== board[1][1] && board[1][1]==board[0][2]&& board[2][0]=='O'){
             cout <<"Jugador 2, has ganado la partida!!" << endl;
             return 0;
             }


       if(board[0][0]== board[1][1] && board[1][1]==board[2][2]&& board[0][0]=='X'){
             cout <<"Jugador 1, has ganado la partida!!" << endl;
             return 0;
             }

       if(board[0][0]== board[1][1] && board[1][1]==board[2][2]&& board[0][0]=='O'){
             cout <<"Jugador 2, has ganado la partida!!" << endl;
             return 0;
             }


return 1;

}
