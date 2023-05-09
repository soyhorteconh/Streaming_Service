//Hortencia Alejandra Ramírez Vázquez A01750150
//Miguel Angel Juarez Dorantes A01753328

#include "Serie.h"
#include "Pelicula.h"
#include "ServicioStreaming.h"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <fstream>

using namespace std;

ServicioStreaming::ServicioStreaming(){}

ServicioStreaming::ServicioStreaming(string nombre){
    this -> nombre = nombre; 
}
ServicioStreaming::~ServicioStreaming(){}

string ServicioStreaming::getNombre(){
    return nombre;
}

void ServicioStreaming::mostrarCalifVideos(){
    
    int p = peliculas.size();
    int s = series.size(); 
    
    for (int i = 0; i < p; i++)
    {
        cout << "\nPelicula " << i + 1 << endl; 
        cout << "Nombre película: " << peliculas[i].getNombre() << endl;
        cout << "Calificacion: " << peliculas[i].getCalificacion() << endl;
    }

    for (int i = 0; i < s; i++)
    {
        cout << "\nSerie " << i + 1 << endl; 
        cout << series[i].getTitulo() << endl;
        int ep = series[i].episodios.size();

        for (int j = 0; j < ep; j++){
            cout << "\n    Episodio " << series[i].episodios[j].getNumEpisodio() << endl; 
            cout << "    Nombre Episodio: " << series[i].episodios[j].getNombre() << endl;
            cout << "    Calificacion: " << series[i].episodios[j].getCalificacion() << endl;
        }
    }
    
}

void ServicioStreaming::mostrarCalifSerie(string titulo){

    int s = series.size();  
    int cont = 0;

    for (int i = 0; i < s; i++){
        
        if (series[i] == titulo){
            cout << "\nSerie " << endl; 
            cout << series[i].getTitulo() << endl;
            int ep = series[i].episodios.size();

            for (int j = 0; j < ep; j++){
                cout << "\n    Episodio " << j + 1 << endl; 
                cout << "    Nombre Episodio: " << series[i].episodios[j].getNombre() << endl;
                cout << "    Calificacion: " << series[i].episodios[j].getCalificacion() << endl;
                cont = cont + 1;
            }
        }
    }
    if (cont == 0){
        cout << "\n¡No se encontraron coincidencias!\n" << endl;
    }
    
}

void ServicioStreaming::mostrarCalifPeliculas(){

    int p = peliculas.size();
    
    for (int i = 0; i < p; i++)
    {
        cout << "\nPelicula " << i + 1 << endl; 
        cout << "Nombre película: " << peliculas[i].getNombre() << endl;
        cout << "Calificacion: " << peliculas[i].getCalificacion() << endl;
    }
    
}


void ServicioStreaming::mostrarVideoCalif(float calif){
    
    int p = peliculas.size();
    int s = series.size(); 
    int cont = 0;
    
    for (int i = 0; i < p; i++)
    {
        if (peliculas[i] == calif)
        {
            cout << "\nPelicula " << endl; 
            cout << "Nombre película: " << peliculas[i].getNombre() << endl;
            cout << "Calificacion: " << peliculas[i].getCalificacion() << endl;
            cont = cont + 1;
        }
       
       
    }

    for (int i = 0; i < s; i++)
    {
        int ep = series[i].episodios.size();
        
        for (int j = 0; j < ep; j++){

            if (series[i].episodios[j] == calif){

                cout << "\n" << series[i].getTitulo() << endl;
                cout << "    Nombre Episodio: " << series[i].episodios[j].getNombre() << endl;
                cout << "    Calificacion: " << series[i].episodios[j].getCalificacion() << endl;
                cont = cont + 1;

            }
        
        }
    }

    if (cont == 0){
        cout << "\n¡No se encontraron coincidencias!\n" << endl;
    }
    
}

void ServicioStreaming::mostrarCalifSerieFiltrado(string titulo, float calif){
    int s = series.size();
    int cont = 0; 

    for (int i = 0; i < s; i++){
        if (series[i] == titulo)
        {
            int ep = series[i].episodios.size();
        
            for (int j = 0; j < ep; j++){

                if (series[i].episodios[j] == calif){

                    cout << "\n" << series[i].getTitulo() << endl;
                    cout << "    Episodio " << endl; 
                    cout << "    Nombre Episodio: " << series[i].episodios[j].getNombre() << endl;
                    cout << "    Calificacion: " << series[i].episodios[j].getCalificacion() << endl;
                    cont = cont + 1;

                }
        
            }

        }
        
    }

    if (cont == 0){
        cout << "\n¡No se encontraron coincidencias!\n" << endl;
    }
}

void ServicioStreaming::mostrarCalifPelisFiltrado(float calif){

    int p = peliculas.size();
    int cont = 0;

    for (int i = 0; i < p; i++) 
    {
        if (peliculas[i] == calif)
        {
            cout << "\n Nombre película: " << peliculas[i].getNombre() << endl;
            cout << "Calificacion: " << peliculas[i].getCalificacion() << endl;
            cont = cont + 1;
        }  
        
    }

    if (cont == 0){
        cout << "\n¡No se encontraron coincidencias!\n" << endl;
    }
    
}

void ServicioStreaming::calificarVideo(string nombre, float calif){


    int s = series.size(); 
    int p = peliculas.size();
    int cont = 0;

    if ((calif <= 10) && (calif>=1 )){

    for (int i = 0; i < p; i++) 
    {
        if (peliculas[i].getNombre() == nombre)
        {
            float cn = (peliculas[i].getCalificacion() + calif) / 2;
            peliculas[i].setCalificacion(cn);
            cout << "La nueva calificacion de la pelicula es: " << peliculas[i].getCalificacion() << endl;
            cont = cont + 1;

        }  
        
    }

    for (int i = 0; i < s; i++){
        
        int ep = series[i].episodios.size();
    
        for (int j = 0; j < ep; j++){

            if (series[i].episodios[j].getNombre() == nombre){
                
                float cn = (series[i].episodios[j].getCalificacion() + calif) / 2;
                series[i].episodios[j].setCalificacion(cn);
                cout << "La nueva calificacion del episodio es: " << series[i].episodios[j].getCalificacion() << endl;
                cont = cont + 1;

            }
    
        }
        
    }
    if (cont == 0){
        cout << "\n¡No se encontraron coincidencias con el titulo ingresado!\n" << endl;
    }
    }
    else{
        cout << "\n¡La calificación ingresada NO es valida!\n" << endl;
    }
}

void ServicioStreaming::mostrarVideoGenero(string genero){

    int s = series.size(); 
    int p = peliculas.size();
    int cont = 0;

    for (int i = 0; i < p; i++) {
        
        string gen = peliculas[i].getGenero();
        char separador = ',';

        for(size_t p=0, q=0; p!=gen.npos; p=q){

            string generos = gen.substr(p+(p!=0),(q=gen.find(separador, p+1))-p-(p!=0));

            if(genero == generos){
                
                peliculas[i].imprimir();
                cont = cont + 1;
            }
        }
    }

    for (int i = 0; i < s; i++){
        
        int ep = series[i].episodios.size();
    
        for (int j = 0; j < ep; j++){

            string gen = series[i].episodios[j].getGenero();
            char separador = ',';

            for(size_t p=0, q=0; p!=gen.npos; p=q){

                string generos = gen.substr(p+(p!=0),(q=gen.find(separador, p+1))-p-(p!=0));  

                if(genero == generos){
                    cout << "\n" <<series[i].getTitulo() << endl;
                    series[i].episodios[j].imprimir();
                    cont = cont + 1;
                }
            }
            
        }
    }

    if (cont == 0){
        cout << "\n¡No se encontraron coincidencias!\n" << endl;
    }
    
}

//Lectura Archivo
void ServicioStreaming::leerArchivo(string nombreArchivo){

    string nombreArch = nombreArchivo + ".csv";

    ifstream ip(nombreArch);

    if(!ip.is_open()) std::cout << "ERROR abriendo el archivo" << '\n';

    string id;
    string nombre;
    string duracion;
    string genero;
    string calificacion;
    string fecha;
    string nombreEp;
    string idEp;
    string temporada; 
    string numeroEp;

    vector <string> id_; 
    vector <string> nombre_; 
    vector <int> duracion_; 
    vector <string> genero_;
    vector <float> calificacion_; 
    vector <string> fecha_; 
    vector <string> nombreEp_;
    vector <string> idEp_;
    vector <int> temporada_; 
    vector <int> numeroEp_;


    int duracionc, temporadac, numeroEpc;
    float calificacionc;


    
    while(ip.good()){
        getline(ip, id,';');
        getline(ip, nombre,';');
        getline(ip, duracion,';');
        getline(ip, genero,';');
        getline(ip, calificacion,';');
        getline(ip, fecha,';');
        getline(ip, nombreEp,';');
        getline(ip, idEp,';');
        getline(ip, temporada,';');
        getline(ip, numeroEp,'\n');

        //Cambiando el tipo de datos 
        duracionc = atoi(duracion.c_str());
        calificacionc = atof(calificacion.c_str());
        temporadac = atoi(temporada.c_str());
        numeroEpc = atoi(numeroEp.c_str());

        //Guardando los datos en vectores
        id_.push_back(id); 
        nombre_.push_back(nombre);  
        duracion_.push_back(duracionc);
        genero_.push_back(genero);    
        calificacion_.push_back(calificacionc); 
        fecha_.push_back(fecha);
        nombreEp_.push_back(nombreEp);
        idEp_.push_back(idEp);
        numeroEp_.push_back(numeroEpc);
        temporada_.push_back(temporadac);

     }

    ip.close(); 
    
    int n = id_.size();
    string nserie;
    
    for (int i = 1; i < n; i++){
        //Guardando Series
        if(nombreEp_[i] != ""){
            
            if (nserie != nombre_[i])
            {
                Serie s1;
                s1.setTitulo(nombre_[i]);
                s1.setIdSerie(id_[i]);
                
                //Guardando episodios
                for (int j = 1; j < n; j++){
                    if(s1.getTitulo() == nombre_[j]){

                        Episodio ep1{idEp_[j],nombreEp_[j],genero_[j],fecha_[j],duracion_[j],calificacion_[j],temporada_[j],numeroEp_[j]};
                
                        s1.agregarEpisodio(ep1);

                    }
                }

                series.push_back(s1);
            }
            
            
            nserie = nombre_[i];
              
        }

        //Guardando Películas
        else if (nombreEp_[i] == ""){
            Pelicula p1{id_[i],nombre_[i],genero_[i],fecha_[i],duracion_[i],calificacion_[i]};
          
            peliculas.push_back(p1);
        }
    }

}

void ServicioStreaming::imprimirCatalogo(){
    cout << "\n***PELICULAS***" << endl;
    int k = peliculas.size();
    for (int i = 0; i < k; i++){
        peliculas[i].imprimir();
    }

    cout << "\n***SERIES***" << endl;
    int a = series.size();
    for (int i = 0; i < a; i++){
        series[i].imprimirSerie();
    }
}

