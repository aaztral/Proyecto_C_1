#include <string>

using namespace std;

class Artist{
private:
    std::string name;  
    int age;
    std::string genre;
    std::string language;
    

public:
    Artist(): name(""), age(0), genre(""), language(""){};
    Artist(std::string na, int ag, std::string gen, std::string lan): name(na), age(ag), genre(gen), language(lan){};
    
    // Obtener las variables
    std::string get_name();
    int get_age();
    std::string get_genre();
    std::string get_language();
    
    // Definir las variables
    void set_name(std::string);
    void set_age(int);
    void set_genre(std::string);
    void set_language(std::string);
    
    
    
};

// Getters
std::string Artist::get_name(){
    return name;
}

int Artist::get_age(){
    return age;
}

std::string Artist::get_genre(){
    return genre;
}

std::string Artist::get_language(){
    return language;
}



// Setters
void Artist::set_name(std::string na){
    name = na;
}

void Artist::set_age(int ag){
    age = ag;
}

void Artist::set_genre(std::string gen){
    genre = gen;
}

void Artist::set_language(std::string lan){
    language = lan;
}