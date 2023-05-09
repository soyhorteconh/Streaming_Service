//Hortencia Alejandra Ramírez Vázquez A01750150
//Miguel Angel Juarez Dorantes A01753328

#ifndef SERVICIOSTREAMING_H
#define SERVICIOSTREAMING_H
#include <iostream>
#include <string>
#include <vector>
#include "serie.h"
#include "pelicula.h"
#include "episodio.h"

using namespace std;

class ServicioStreaming{    private:
        string nombre;
        vector <Pelicula> peliculas;
        vector <Serie> series;

    public:
        ServicioStreaming();
        ServicioStreaming(string nombre);
        ~ServicioStreaming();

        string getNombre();

        void mostrarCalifVideos();//muestra todos los videos con sus respectivas calificaciones
        void mostrarCalifSerie(string titulo);//muestra la calificacion de los episodios de una serie
        void mostrarCalifPeliculas();//muestra la calificacion de todas las peliculas
        void mostrarVideoCalif(float calif);//muestra todos los videos con una calificacion determinada
        void mostrarCalifSerieFiltrado(string titulo, float calif);//muestra los episodios de una serie con una calificacion determinada
        void mostrarCalifPelisFiltrado(float calif);//muestra las peliculas con una calificaion determinada
        void calificarVideo(string nombre, float calif);//Permite calificar un video
        void mostrarVideoGenero(string genero);//muestra todos los videos de un mismo genero
        void leerArchivo(string nombreArchivo);
        void imprimirCatalogo();//muestra todas las peliculas y series del servicio de streaming


};
#endif