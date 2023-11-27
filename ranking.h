#include <iostream>
#include <string>

#ifndef RANKING_H_
#define RANKING_H_

using namespace std;

class Rank{
private:
    std::string name;
    int year;
    std::string genre; 
    int rank;

public: 
    Rank(): name(""), year(0), genre(""), rank(0){};
    Rank(std::string nam, int ye, std::string gen, int ran): name(nam), year(ye), genre(gen), rank(ran){};

    std::string get_name();
    int get_year();
    std::string get_genre();
    int get_rank();

    void set_name(std::string);
    void set_year(int);
    void set_genre(std::string);
    void set_rank(int); 
};

std::string Rank::get_name(){
    return name;
}

int Rank::get_year(){
    return year;
}

std::string Rank::get_genre(){
    return genre;
}

int Rank::get_rank(){
    return rank;
}

void Rank::set_name(std::string nam){
    name = nam;
}

void Rank::set_year(int ye){
    year = ye;
}

void Rank::set_genre(std::string gen){
    genre = gen;
}

void Rank::set_rank(int ran){
    rank = ran;
}

#endif