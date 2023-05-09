//Hortencia Alejandra Ramírez Vázquez A01750150
//Miguel Angel Juarez Dorantes A01753328

#ifndef PELICULA_H
#define PELICULA_H
#include "Video.h"
#include <iostream>
#include <string>

using namespace std;

class Pelicula : public Video{

    public:
        Pelicula();
        Pelicula(string id, string nombre, string genero, string fechaEstreno, int duracion, float calificacion);
        ~Pelicula();

        void imprimir();
           
}; 
#endif   