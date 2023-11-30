#ifndef MUSIC_H_
#define MUSIC_H_

#include <iostream>
#include <string>
#include <vector>
#include "album.h"
#include "song.h"
#include "artist.h"

using namespace std;

/*Creamos una clase Music con la que podamos crear tierlist para albumes, canciones o artistas.
queremos que el numero máximo sea algo como 100, número arbitrario, solo para poner un limite a la cantidad
de albumes/s/a que podemos introducir.
*/
class Music {
    private:
        std::string name;
        int album_num = 0;
        int song_num = 0;
        int artist_num = 0;

        Album arg_alb[100];
        Song arg_son[100];
        Artist arg_art[100];
    
    public:
        Music(): name(""){};
        Music(std::string nam): name(nam){};

        std::string get_name();
        int get_album_num();
        int get_song_num();
        int get_artist_num();

        void set_name(std::string);
        void new_ranking();
        void create_album();
        void create_song();
        void create_artist();
// Setters y Getters
};

std::string Music::get_name() {
    return name;
}

int Music::get_album_num() {
    return album_num;
}

int Music::get_song_num() {
    return song_num;
}

int Music::get_artist_num() {
    return artist_num;
}

void Music::set_name(string nam) {
    name = nam;
}
/* Creamos un "Nuevo ranking que abrirá un segundo menú para la opción 1 en el main. 
Aquí podremos seleccionar si queremos introducir un Alb/Song/Art para rankear.
*/

void Music::new_ranking() {
    cout << "---------------" << endl;
    cout << "Rank new Music:" << endl;
    cout << "---------------" << endl;
    
    int typ;
    cout << "1. Rank Album" << endl;
    cout << "2. Rank Song" << endl;
    cout << "3. Rank Artist" << endl;
    cout << "¿Qué tipo de música deseas rankear?: ";
    cin >> typ;
    cout << endl;

    if (typ >= 1 && typ <= 3) {
     switch (typ) {
         case 1: {
             create_album();
             break;
         }
             
         case 2: {
             create_song();
             break;
         }

         case 3: {
             create_artist();
             break;
         }
     }
     
    } else {
     cout << "Opción invalida. :(" << endl;
    }
}

/*
Dependiendo de la opción que escogíeramos se seleccionará un create_album o song o artist.
Todos hacen esencialmente lo mismo así que explicaré el de álbum.
*/

void Music::create_album(){
    // Creamos una seríe de listas, estas listas serán nuestros "Tiers".
    std::vector<Album> lista1, lista2, lista3, lista4, lista5;
    // Ciclo while para continuar agregando albumes mientras se desee.
    char continuar = 'y';

    while (continuar == 'y' || continuar == 'Y') {
    // Aquí llamamos a la clase album para crear un objeto, y pedimos todas las caracteristicas del album.
    Album album_1;
    album_1.new_album();
    
    cout << " " << endl;
    cout << "--> Álbum: " << album_1.get_name() << endl;
    cout << "EL ranking del album es: " << album_1.get_rank() << " (1-5)" << endl;
    cout << "La duración del álbum es de: " << album_1.get_lenght() << " min" << endl;
    cout << "Este álbum fue hecho por: " << album_1.get_author() << endl;
    cout << "Este álbum salió en el año de: " << album_1.get_year() << endl;
    cout << "Este álbum pertenece al género:  " << album_1.get_genre() << endl;
    cout << " " << endl;
    cout << endl;
    // Este switch es para determinar en que lista (tier) se colocarán dependiendo del rank que el usuario halla dado. 
        int ranking = album_1.get_rank();

        switch (ranking) {
            case 1:
                lista1.push_back(album_1);
                break;
            case 2:
                lista2.push_back(album_1);
                break;
            case 3:
                lista3.push_back(album_1);
                break;
            case 4:
                lista4.push_back(album_1);
                break;
            case 5:
                lista5.push_back(album_1);
                break;
            default:
                std::cout << "Ranking no válido. El álbum no se añadirá a ninguna tier." << std::endl;
        }
        // Si desea continuar introduciendo albumes o no.
        cout << "¿Desea ingresar otro álbum? (y/n): ";
        cin >> continuar;
    }

    // Estos ciclos for introducen el album dentro de la lista correspondiente con el nombre y el autor en display.

    std::cout << "---S Tier Ranking 1):---" << std::endl;
    for (const auto& album : lista1) {
        std::cout << "Nombre: " << album.get_name() << ", Autor: " << album.get_author() << std::endl;
    }
    std::cout << "---A Tier - Ranking 2:---" << std::endl;
    for (const auto& album : lista2) {
        std::cout << "Nombre: " << album.get_name() << ", Autor: " << album.get_author() << std::endl;
    }
    std::cout << "---B Tier - Ranking 3:---" << std::endl;
    for (const auto& album : lista3) {
        std::cout << "Nombre: " << album.get_name() << ", Autor: " << album.get_author() << std::endl;
    }
    std::cout << "---C Tier - Ranking 4:---" << std::endl;
    for (const auto& album : lista4) {
        std::cout << "Nombre: " << album.get_name() << ", Autor: " << album.get_author() << std::endl;
    }
    std::cout << "---F Tier - Ranking 5:---" << std::endl;
    for (const auto& album : lista5) {
        std::cout << "Nombre: " << album.get_name() << ", Autor: " << album.get_author() << std::endl;
    }

    }



void Music::create_song(){
    std::vector<Song> lista1, lista2, lista3, lista4, lista5;
    char continuar = 'y';

    while (continuar == 'y' || continuar == 'Y') {
    Song song_1;
    song_1.new_song();
    
    cout << "--> Canción " << song_1.get_name() << endl;
    cout << "EL ranking de la canción es: " << song_1.get_rank() << " (1-5)" << endl;
    cout << "La duración de esta canción es de: " << song_1.get_lenght() << " min" << endl;
    cout << "Esta canción fue hecha por: " << song_1.get_author() << endl;
    cout << "Esta canción salió en el año de: " << song_1.get_year() << endl;
    cout << "Esta canción pertenece al género:  " << song_1.get_genre() << endl;
    cout << endl;

        int ranking = song_1.get_rank();

        switch (ranking) {
            case 1:
                lista1.push_back(song_1);
                break;
            case 2:
                lista2.push_back(song_1);
                break;
            case 3:
                lista3.push_back(song_1);
                break;
            case 4:
                lista4.push_back(song_1);
                break;
            case 5:
                lista5.push_back(song_1);
                break;
            default:
                std::cout << "Ranking no válido. La canción no se añadirá a ninguna tier." << std::endl;
        }
        std::cout << "¿Desea ingresar otra canción? (y/n): ";
        std::cin >> continuar;
    

    std::cout << "---S Tier Ranking 1):---" << std::endl;
    for (const auto& song : lista1) {
        std::cout << "Nombre: " << song_1.get_name() << ", Autor: " << song_1.get_author() << std::endl;
    }
    std::cout << "---A Tier - Ranking 2:---" << std::endl;
    for (const auto& song : lista2) {
        std::cout << "Nombre: " << song_1.get_name() << ", Autor: " << song_1.get_author() << std::endl;
    }
    std::cout << "---B Tier - Ranking 3:---" << std::endl;
    for (const auto& song : lista3) {
        std::cout << "Nombre: " << song_1.get_name() << ", Autor: " << song_1.get_author() << std::endl;
    }
    std::cout << "---C Tier - Ranking 4:---" << std::endl;
    for (const auto& song : lista4) {
        std::cout << "Nombre: " << song_1.get_name() << ", Autor: " << song_1.get_author() << std::endl;
    }
    std::cout << "---F Tier - Ranking 5:---" << std::endl;
    for (const auto& song : lista5) {
        std::cout << "Nombre: " << song_1.get_name() << ", Autor: " << song_1.get_author() << std::endl;
    }
    }


}

void Music::create_artist(){
    std::vector<Artist> lista1, lista2, lista3, lista4, lista5;
    char continuar = 'y';

    while (continuar == 'y' || continuar == 'Y') {
    Artist artist_1;
    artist_1.new_artist();
    
    cout << " " << endl;
    cout << "--> Artista " << artist_1.get_name() << endl;
    cout << "EL ranking de este artista es: " << artist_1.get_rank() << " (1-5)" << endl;
    cout << "Este artista nació en: " << artist_1.get_year() << endl;
    cout << "Este aritsta canta en el idioma: " << artist_1.get_language() << endl;
    cout << "Este artista es principalmente del género:  " << artist_1.get_genre() << endl;
    cout << endl;
    
    arg_art[artist_num] = artist_1;
    artist_num = artist_num + 1;

        int ranking = artist_1.get_rank();

        switch (ranking) {
            case 1:
                lista1.push_back(artist_1);
                break;
            case 2:
                lista2.push_back(artist_1);
                break;
            case 3:
                lista3.push_back(artist_1);
                break;
            case 4:
                lista4.push_back(artist_1);
                break;
            case 5:
                lista5.push_back(artist_1);
                break;
            default:
                std::cout << "Ranking no válido. La canción no se añadirá a ninguna tier." << std::endl;
        }
        std::cout << "¿Desea ingresar otro artista? (y/n): ";
        std::cin >> continuar;
    // Para el caso de artista solo usamos el nombre para el display.
    std::cout << "---S Tier Ranking 1):---" << std::endl;
    for (const auto& artist : lista1) {
        std::cout << "Nombre: " << artist_1.get_name() << std::endl;
    }
    std::cout << "---A Tier - Ranking 2:---" << std::endl;
    for (const auto& artist : lista2) {
        std::cout << "Nombre: " << artist_1.get_name() << std::endl;
    }
    std::cout << "---B Tier - Ranking 3:---" << std::endl;
    for (const auto& artist : lista3) {
        std::cout << "Nombre: " << artist_1.get_name() <<  std::endl;
    }
    std::cout << "---C Tier - Ranking 4:---" << std::endl;
    for (const auto& artist : lista4) {
        std::cout << "Nombre: " << artist_1.get_name() <<  std::endl;
    }
    std::cout << "---F Tier - Ranking 5:---" << std::endl;
    for (const auto& artist : lista5) {
        std::cout << "Nombre: " << artist_1.get_name() <<  std::endl;
    }
    }




}



#endif
