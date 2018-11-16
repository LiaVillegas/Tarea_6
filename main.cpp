#include "jugadores.cpp"
#include "draw.cpp"
#include "win.cpp"


int main(){

    cout << "\n JUEGO TRES EN LINEA" << endl;

    cout <<"\n     0  |  1   | 2 \n";
    cout <<"   ------------------\n";
    cout <<" 0      |      |    \n";
    cout <<"   ------------------\n";
    cout <<" 1      |      |    \n";
    cout <<"   ------------------\n";
    cout <<" 2      |      |    \n"<< endl;


   do
    {
        Player1();
        Player2();
    }

    while(Win()!=0);

    return 0;

}












