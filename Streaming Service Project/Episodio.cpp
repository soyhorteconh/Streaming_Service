//Hortencia Alejandra Ramírez Vázquez A01750150
//Miguel Angel Juarez Dorantes A01753328

#include "Episodio.h"
#include <iostream>
#include <string>

using namespace std;

Episodio::Episodio(string id, string nombre, string genero, string fechaEstreno, int duracion, float calificacion, int temporada, int numEpisodio):
    Video(id, nombre, genero, fechaEstreno, duracion, calificacion){
        this -> temporada = temporada;
        this -> numEpisodio = numEpisodio;
}
Episodio::Episodio(){}

Episodio::~Episodio(){}

int Episodio::getTemporada(){
    return temporada;
}
int Episodio::getNumEpisodio(){
    return numEpisodio;
}


void Episodio::imprimir(){
    cout << "\tId: " << getId() << endl;
    cout << "\tNombre Episodio: " << getNombre() <<  endl;
    cout << "\tDuración: " << getDuracion() << endl;
    cout << "\tGenero: " << getGenero() << endl;
    cout << "\tCalificacion: " << getCalificacion() << endl;
    cout << "\tFecha de estreno: " << getFechaEstreno() << endl;
    cout << "\tNumero de episodio: " << numEpisodio << endl;
    cout << "\tTemporada:" << temporada << endl;
}
