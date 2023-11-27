#include <string>
#include "ranking.h"

#ifndef ARTIST_H_
#define ARTIST_H_

using namespace std;

class Artist: public Rank{
private:  
    std::string language;
    
public:
    Artist(): language(""), Rank(){};
    Artist(std::string nam, int ye, std::string gen, int ran, std::string lan): language(lan), Rank(nam, ye, gen, ran){};
    
    // Obtener las variables
    std::string get_language();
    
    // Definir las variables
    void set_language(std::string);
    void new_artist();
    
};

// Getters

std::string Artist::get_language(){
    return language;
}


// Setters

void Artist::set_language(std::string lan){
    language = lan;
}

void Artist::new_artist(){
    std::string nam;
    int ye;
    std::string gen;
    int ran;
    std::string lan;

    cout << "Nombre del Artista: ";
    cin >> nam;
    Artist::set_name(nam);

    cout << "Año de Nacimiento: ";
    cin >> ye;
    Artist::set_year(ye);

    cout << "Genero del Artista: ";
    cin >> gen;
    Artist::set_genre(gen);

    cout << "Idioma del Artista.s ";
    cin >> lan;
    Artist::set_language(lan);

    cout << "¿Que ranking le das a tu artista?(1-5): ";
    cin >> ran;
    Artist::set_rank(ran);

}
#endif