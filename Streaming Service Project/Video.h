
//Hortencia Alejandra Ramírez Vázquez A01750150
//Miguel Angel Juarez Dorantes A01753328

#ifndef VIDEO_H
#define VIDEO_H
#include <iostream>
#include <string>

using namespace std;

class Video{

    private:
        string id, nombre, genero, fechaEstreno;
        int duracion;
        float calificacion; 
    
    public:
        Video();
        Video(string id, string nombre, string genero, string fechaEstreno, int duracion, float calificacion);
        ~Video();
        
        string getId();
        string getNombre();
        int getDuracion();
        string getGenero();
        float getCalificacion();
        string getFechaEstreno();
        
        void setCalificacion(float calificacion);

        void mostrarCalificación();

        bool operator==(float &c);

        virtual void imprimir() = 0;


};
#endif