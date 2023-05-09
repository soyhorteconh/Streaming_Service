//Hortencia Alejandra Ramírez Vázquez A01750150
//Miguel Angel Juarez Dorantes A01753328

#ifndef SERIE_H
#define SERIE_H
#include "Episodio.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Serie{
    private:
        string idSerie, titulo;
        

    public:
    vector <Episodio> episodios;

    Serie();
    Serie(string idSerie, string titulo, vector<Episodio> episodios);
    ~Serie();
    
    string getTitulo();
    string getIdSerie();

    void setIdSerie(string idSerie);
    void setTitulo(string titulo);
    void agregarEpisodio(Episodio episodio);
    void imprimirSerie();

    bool operator==(string &nombre);
};
#endif