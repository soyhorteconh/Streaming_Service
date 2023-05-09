//Hortencia Alejandra Ramírez Vázquez A01750150
//Miguel Angel Juarez Dorantes A01753328

#include "Pelicula.h"
#include <iostream>
#include <string>

using namespace std;

Pelicula::Pelicula(){}

Pelicula::~Pelicula(){}

Pelicula::Pelicula(string id, string nombre, string genero, string fechaEstreno, int duracion, float calificacion):
    Video(id, nombre, genero, fechaEstreno, duracion, calificacion){
}

void Pelicula::imprimir(){
    cout << "\nPelicula " << endl;
    cout << "Id: " << getId() << endl;
    cout << "Nombre: " << getNombre() <<  endl;
    cout << "Duración: " << getDuracion() << endl;
    cout << "Genero: " << getGenero() << endl;
    cout << "Calificación: " << getCalificacion() << endl;
    cout << "Fecha de estreno: " <<  getFechaEstreno() << endl;
}