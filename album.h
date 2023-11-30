#include <string>
#include "ranking.h"

#ifndef ALBUM_H_
#define ALBUM_H_

using namespace std;
/* Las clases album, song y artist son las clases hijo y son esencialmente lo mismo 
solo que con diferentes caracteristicas individuales en el caso de la clase artist
*/
class Album: public Rank{
private:  
    int lenght;
    std::string author;
    
public:
    Album(): lenght(0), author(""), Rank(){};
    Album(std::string nam, int ye, std::string gen, int ran, int len, std::string aut): lenght(len), author(aut), Rank(nam, ye, gen, ran){};
    
    // Obtener las variables
    int get_lenght();
    std::string get_author() const;
    
    // Definir las variables
    void set_lenght(int);
    void set_author(std::string);
    void new_album();
    
};

// setters y getters

int Album::get_lenght(){
    return lenght;
}

std::string Album::get_author() const{
    return author;
}

void Album::set_lenght(int len){
    lenght = len;
}

void Album::set_author(std::string aut){
    author = aut;
}
/*
La función new_album/song/artist la llamaremos en music para que se hagan los inputs, en este espacio 
pedimos los datos de el album/s¡canción o artista al usuario. getline para strings cin simple para numeros. 
*/
void Album::new_album(){
    std::string nam;
    int ye;
    std::string gen;
    int ran;
    int len;
    std::string aut;

    cout << "Nombre del Álbum: ";
    getline(cin >> ws, nam);
    Album::set_name(nam);

    cout << "Año de publicación: ";
    cin >> ye;
    Album::set_year(ye);

    cout << "Género del Álbum: ";
    getline(cin >> ws, gen);
    Album::set_genre(gen);

    cout << "Duración del Álbum (min): ";
    cin >> len;
    Album::set_lenght(len);

    cout << "Autor del álbum: ";
    getline(cin >> ws, aut);
    Album::set_author(aut);

    cout << "¿Que ranking le das a tu álbum?(1-5): ";
    cin >> ran;
    Album::set_rank(ran);

}
#endif