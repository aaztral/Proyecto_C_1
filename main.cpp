
#include <iostream>
#include <string>
#include <limits>
#include "music.h"

using namespace std;

void menu (){
    cout << "----------------" << endl;
    cout << "Recommend Music." << endl;
    cout << "----------------" << endl;
    cout << "¿Qué quieres hacer?" << endl;
    cout << "1. Rankear nueva música." << endl;
    cout << "2. Salir." << endl;
}

int main(){
    Music music;
    bool continua = true;
    int option;

    while (continua) {
        menu();
        cout << "Escoge lo que quieres hacer (1 - 4): ";

        // Check for valid input
        if (cin >> option) {
            cout << endl;

            if (option == 1) {
                music.new_ranking(); 
            } 
            else if (option == 2) {
                cout << "¡Nos vemos!" << endl;
                continua = false;
            } 
            
            else {
                cout << "Opción inválida." << endl;
            }
        } else {
            cin.clear();

            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Entrada inválida. Introduce un número del 1 al 4." << endl;
        }
    }

    return 0;
}
