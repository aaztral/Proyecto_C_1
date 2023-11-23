#include <string>
#include "ranking.h"

using namespace std;

class Artist: public Rank{
private:  
    int age;
    std::string language;
    
public:
    Artist(): age(0), language(""), Rank(){};
    Artist(std::string nam, int ye, std::string gen, int ran, int ag, std::string lan): age(ag), language(lan), Rank(nam, ye, gen, ran){};
    
    // Obtener las variables
    int get_age();
    std::string get_language();
    
    // Definir las variables
    void set_age(int);
    void set_language(std::string);
    void new_ranking();
    
};

// Getters

int Artist::get_age(){
    return age;
}

std::string Artist::get_language(){
    return language;
}


// Setters

void Artist::set_age(int ag){
    age = ag;
}

void Artist::set_language(std::string lan){
    language = lan;
}

void Artist::new_ranking(){
    std::string nam;
    int ye;
    std::string gen;
    int ran;

    cout << "Nombre del Artista:";
    cin >> nam;
    Artist::set_name(nam);

    cout << "Año de Nacimiento:";
    cin >> ye;
    Artist::set_year(ye);

    cout << "Genero del Artista:";
    cin >> gen;
    Artist::set_genre(gen);

    cout << "¿Que ranking le das a tu artista?(1-5):";
    cin >> ran;
    Artist::set_rank(ran);

}
