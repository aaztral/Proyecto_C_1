#include <string>

using namespace std;

class Album{
private:
    std::string title;  
    int lenght;
    std::string genre;
    std::string author;
    

public:
    Album(): title(""), lenght(0), genre(""), author(""){};
    Album(std::string ti, int len, std::string gen, std::string aut): title(ti), lenght(len), genre(gen), author(aut){};
    
    // Obtener las variables
    std::string get_title();
    int get_lenght();
    std::string get_genre();
    std::string get_author();
    
    // Definir las variables
    void set_title(std::string);
    void set_lenght(int);
    void set_genre(std::string);
    void set_author(std::string);
    
    
    
};

// Getters
std::string Album::get_title(){
    return title;
}

int Album::get_lenght(){
    return lenght;
}

std::string Album::get_genre(){
    return genre;
}

std::string Album::get_author(){
    return author;
}



// Setters
void Album::set_title(std::string ti){
    title = ti;
}

void Album::set_lenght(int len){
    lenght = len;
}

void Album::set_genre(std::string gen){
    genre = gen;
}

void Album::set_author(std::string aut){
    author = aut;
}
