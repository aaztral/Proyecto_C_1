#include <string>
#include "ranking.h"

#ifndef SONG_H_
#define SONG_H_

using namespace std;

class Song: public Rank{
private:  
    int lenght;
    std::string author;
    
public:
    Song(): lenght(0), author(""), Rank(){};
    Song(std::string nam, int ye, std::string gen, int ran, int len, std::string aut): lenght(len), author(aut), Rank(nam, ye, gen, ran){};
    
    // Obtener las variables
    int get_lenght();
    std::string get_author();
    
    // Definir las variables
    void set_lenght(int);
    void set_author(std::string);
    void new_song();
    
};

// Getters

int Song::get_lenght(){
    return lenght;
}

std::string Song::get_author(){
    return author;
}


// Setters

void Song::set_lenght(int len){
    lenght = len;
}

void Song::set_author(std::string aut){
    author = aut;
}

void Song::new_song(){
    std::string nam;
    int ye;
    std::string gen;
    int ran;
    int len;
    std::string aut;

    cout << "Nombre de la Canción: ";
    cin >> nam;
    Song::set_name(nam);

    cout << "Año de publicación: ";
    cin >> ye;
    Song::set_year(ye);

    cout << "Genero de la Canción: ";
    cin >> gen;
    Song::set_genre(gen);

    cout << "Duración de la Canción (min): ";
    cin >> len;
    Song::set_lenght(len);

    cout << "Autor de la canción ";
    cin >> aut;
    Song::set_author(aut);

    cout << "¿Que ranking le das a tu canción?(1-5): ";
    cin >> ran;
    Song::set_rank(ran);

}
#endif 
