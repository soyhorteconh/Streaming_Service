//Hortencia Alejandra Ramírez Vázquez A01750150
//Miguel Angel Juarez Dorantes A01753328

#include <iostream>
#include <string>
#include "Video.h"

using namespace std;

Video::Video(string id, string nombre, string genero, string fechaEstreno, int duracion, float calificacion){
    this -> id = id;
    this -> nombre = nombre;
    this -> genero = genero;
    this -> fechaEstreno = fechaEstreno;
    this -> duracion = duracion;
    this -> calificacion = calificacion;
    
}

Video::Video(){}

Video::~Video(){}

string Video::getId(){
    return id;
}
string Video::getNombre(){
    return nombre;
}
string Video::getGenero(){
    return genero;
}
float Video::getCalificacion(){
    return calificacion;
}
int Video::getDuracion(){
    return duracion;
}
string Video::getFechaEstreno(){
    return fechaEstreno;
}

void Video::setCalificacion(float calificacion){
    this -> calificacion = calificacion;
}


void Video::mostrarCalificación(){
    cout << "La calificación es: " << calificacion;
}

bool Video::operator==(float &c){
    if (calificacion == c){
        return true;
    }
    else{
        return false;
    }
    
}