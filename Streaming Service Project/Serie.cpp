//Hortencia Alejandra Ramírez Vázquez A01750150
//Miguel Angel Juarez Dorantes A01753328

#include "Serie.h"

#include <iostream>
#include <string>

using namespace std;

Serie::Serie(string idSerie, string titulo, vector<Episodio> episodios){
    this -> idSerie = idSerie;
    this -> titulo = titulo;
    this -> episodios = episodios;    
}
Serie::Serie(){}

Serie::~Serie(){}

string Serie::getTitulo(){
    return titulo;
}

string Serie::getIdSerie(){
    return idSerie;
}
void Serie::setIdSerie(string idSerie){
    this -> idSerie = idSerie;
}
void Serie::setTitulo(string titulo){
    this -> titulo = titulo;
}

void Serie::agregarEpisodio(Episodio episodio){
    episodios.push_back(episodio);
}
void Serie::imprimirSerie(){

    cout << "\nSerie " << endl;
    cout << "Id: " << idSerie << endl;
    cout << "Titulo: " << titulo <<  endl;
    
    int n = episodios.size();

    for (int i = 0; i < n; i++){
        cout << "\nEpisodio " << i + 1 << endl;
        episodios[i].imprimir();
    }
}

bool Serie::operator==(string &nombre){
    if (titulo == nombre){
        return true;
    }
    else{
        return false;
    }
}



