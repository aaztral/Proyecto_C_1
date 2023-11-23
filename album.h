#include <string>
#include "ranking.h"

using namespace std;

class Album: public Rank{
private:  
    int lenght;
    std::string author;
    
public:
    Album(): lenght(0), author(""), Rank(){};
    Album(std::string nam, int ye, std::string gen, int ran, int len, std::string aut): lenght(len), author(aut), Rank(nam, ye, gen, ran){};
    
    // Obtener las variables
    int get_lenght();
    std::string get_author();
    
    // Definir las variables
    void set_lenght(int);
    void set_author(std::string);
    void new_ranking();
    
};

// Getters

int Album::get_lenght(){
    return lenght;
}

std::string Album::get_author(){
    return author;
}


// Setters

void Album::set_lenght(int len){
    lenght = len;
}

void Album::set_author(std::string aut){
    author = aut;
}

void Album::new_ranking(){
    std::string nam;
    int ye;
    std::string gen;
    int ran;

    cout << "Nombre del Álbum:";
    cin >> nam;
    Album::set_name(nam);

    cout << "Año de publicación:";
    cin >> ye;
    Album::set_year(ye);

    cout << "Genero del Álbum:";
    cin >> gen;
    Album::set_genre(gen);

    cout << "¿Que ranking le das a tu álbum?(1-5):";
    cin >> ran;
    Album::set_rank(ran);

}