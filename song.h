#include <string>

using namespace std;

class Song{
private:
    std::string title;  
    int year;
    std::string genre;
    std::string author;
    

public:
    Song(): title(""), year(0), genre(""), author(""){};
    Song(std::string ti, int ye, std::string gen, std::string aut): title(ti), year(ye), genre(gen), author(aut){};
    
    // Obtener las variables
    std::string get_title();
    int get_year();
    std::string get_genre();
    std::string get_author();
    
    // Definir las variables
    void set_title(std::string);
    void set_year(int);
    void set_genre(std::string);
    void set_author(std::string);
    
    
    
};

// Getters
std::string Song::get_title(){
    return title;
}

int Song::get_year(){
    return year;
}

std::string Song::get_genre(){
    return genre;
}

std::string Song::get_author(){
    return author;
}



// Setters
void Song::set_title(std::string ti){
    title = ti;
}

void Song::set_year(int len){
    year = len;
}

void Song::set_genre(std::string gen){
    genre = gen;
}

void Song::set_author(std::string aut){
    author = aut;
}

