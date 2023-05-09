//Hortencia Alejandra Ramírez Vázquez A01750150
//Miguel Angel Juarez Dorantes A01753328

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <stdio.h>
#include "ServicioStreaming.h"
using namespace std;

void excepcionMenu(int opc){
    if ((opc > 10) || (opc < 1)){
            string err = "Opción no válida";
            throw(err);
    }
} 

int main(void){

    ServicioStreaming servicio("Family Moment Video");
    int opc;
    string nombre, genero;
    float calif;

    servicio.leerArchivo("BasePeliculas4");
    
    cout << "\n*******Bienvenido a "<< servicio.getNombre() <<"*******\n" <<endl;
    cout << "\nPresione enter para continuar ..." << endl;   

    while (opc != 10){
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "\n********Menú Principal******" << endl;
        cout << "\n1. Mostrar Catalogo" << endl;
        cout << "2. Mostrar calificacion de películas y episodios" << endl;
        cout << "3. Mostrar calificación de los episodios de una serie" << endl;
        cout << "4. Mostrar calificación de todas las películas" << endl;
        cout << "5. Buscar películas y episodios por calificación" << endl;
        cout << "6. Buscar episodios de una serie por calificación"<< endl;
        cout << "7. Buscar películas por calificación" << endl;
        cout << "8. Calificar una pelicula o un episodio" << endl;
        cout << "9. Buscar peliculas y series por genero" << endl;
        cout << "10. Salir" << endl;
        
        cout << "\nIntroduzca el numero de la opción: "; cin >> opc;

        try{
            excepcionMenu(opc);
            switch (opc){
                
            case 1:
                servicio.imprimirCatalogo();
                cout << "Presione enter para continuar ..."<< endl;
                system("read");
                break;

            case 2:
                servicio.mostrarCalifVideos();
                cout << "Presione enter para continuar ..."<< endl;
                system("read");
                break;

            case 3:
                cin.ignore(32767,'\n');
                cout << "Introduzca el nombre de la serie: "; getline(cin, nombre);
                servicio.mostrarCalifSerie(nombre);
                cout << "Presione enter para continuar ..."<< endl;
                system("read");
                break;

            case 4:
                servicio.mostrarCalifPeliculas();
                cout << "Presione enter para continuar ..."<< endl;
                system("read");
                break;  

            case 5:
                cout <<"Introduzca la calificacion: "; cin >> calif;
                servicio.mostrarVideoCalif(calif);
                cout << "Presione enter para continuar ..."<< endl;
                system("read");
                break;
                
            case 6:
                cin.ignore(32767,'\n');
                cout <<"Introduzca el nombre de la serie: "; getline(cin, nombre);
                cout <<"Introduzca la calificacion: "; cin >> calif;
                servicio.mostrarCalifSerieFiltrado(nombre, calif);
                cout << "Presione enter para continuar ..."<< endl;
                system("read");
                break;

            case 7:
                cout <<"Introduzca la calificacion: "; cin >> calif;
                servicio.mostrarCalifPelisFiltrado(calif);
                cout << "Presione enter para continuar ..."<< endl;
                system("read");
                break;  
                
            case 8:
                cin.ignore(32767,'\n');
                cout <<"Introduzca el nombre del episodio o película: "; getline(cin, nombre);
                cout <<"Introduzca la calificacion que le otorgará (1 a 10): "; cin >> calif;
                servicio.calificarVideo(nombre, calif);
                cout << "Presione enter para continuar ..."<< endl;
                system("read");
                break; 
                
            case 9:
                cin.ignore(32767,'\n');
                cout << "Introduzca el genero: "; getline(cin, genero);
                servicio.mostrarVideoGenero(genero);
                cout << "Presione enter para continuar ..."<< endl;
                system("read");
                break;     
                

            }
        
        }

        catch(string &err){
            cout << err << endl;
            cout << "Presione enter para continuar ..."<< endl;
            system("read");

        }
        system("clear");
    }

    cout << "\nSaliste de la sesión" << endl;

    return 0;
}