//Hortencia Alejandra Ramírez Vázquez A01750150
//Miguel Angel Juarez Dorantes A01753328

#ifndef EPISODIO_H
#define EPISODIO_H
#include "Video.h"
#include <iostream>
#include <string>

using namespace std;

class Episodio : public Video{

    private:
        int temporada, numEpisodio;

    public:
        Episodio();
        Episodio(string id, string nombre, string genero, string fechaEstreno, int duracion, float calificacion, int temporada, int numEpisodio);
        ~Episodio();
        
        int getTemporada();
        int getNumEpisodio();

        void imprimir();

};
#endif