#include <iostream>
#include <string>
#include "album.h"
#include "song.h"
#include "artist.h"

using namespace std;

int main()
{
    Album album_1("The Dark Side Of The Moon", 42, "Psych Rock", "Pink Floyd");
    
    std::cout << "Titulo del álbum: " << album_1.get_title() << '\n';
    std::cout << "Este álbum dura: " << album_1.get_lenght() << "min" << '\n';
    std::cout << "Este álbum es considerado del género: " << album_1.get_genre() << '\n';
    std::cout << "Este álbum es de: " << album_1.get_author() << '\n';
    std::cout << '\n';

    Song song_1("Dreams", 1977, "Soft Rock", "Fleetwood Mac");
    
    std::cout << "Titulo de la canción: " << song_1.get_title() << '\n';
    std::cout << "Este canción fue publicada en: " << song_1.get_year() << '\n';
    std::cout << "Esta canción es considerada del género: " << song_1.get_genre() << '\n';
    std::cout << "Esta canción es de: " << song_1.get_author() << '\n';
    std::cout << '\n';

    Artist artist_1("Taylor Swift", 33, "Pop", "Inglés");
    
    std::cout << "Nombre del artista: " << artist_1.get_name() << '\n';
    std::cout << "Este artista tiene: " << artist_1.get_age() << "años" << '\n';
    std::cout << "Este artista crea musica del género: " << artist_1.get_genre() << '\n';
    std::cout << "Este artista canta en el idioma: " << artist_1.get_language() << '\n';
    std::cout << '\n';

    return 0;
}