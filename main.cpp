
#include <iostream>
#include <string>
#include <limits>
#include "music.h"

using namespace std;

// Creamos el menú. 
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
    // Creamos un valor booleano para el ciclo while que imprimirá el menú y un input de opción hasta que se quiera salir. También llamamos a la clase music.
    while (continua) {
        menu();
        cout << "Escoge lo que quieres hacer (1 / 2): ";

        // Verificamos que el input sea valido. En caso de que sea 1 creamos un nuevo ranking, si es 2 salimos y se finaliza el código. 
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

            cout << "Entrada inválida. Introduce un número del 1 al 2." << endl;
        } // Este código es por si acaso, previene un loop infinito creado por un input invalido.
    }

    return 0;
}
