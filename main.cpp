#include <iostream>
using namespace std;
#include <time.h>
#include <random>
#include "Pelicula.h"
#include "HTHPlus.h"

HTHPlus* Plus = new HTHPlus;

int menu();

int main() {
	int opcion;
	srand(time(NULL));
	while((opcion = menu()) != 7) {
		switch (opcion) {
			case 1: {
				string nombre;
				string genero;
				string director;
				int valoracion = 1+ rand()%4;
				cin.ignore();
							cout << "Ingrese el nombre de la pelicula: ";
							getline(cin,nombre);
							cout << "Ingrese un genero: ";
							getline(cin,genero);
							cout << "Ingrese el nombre del Director: ";
							getline(cin,director);
							Pelicula* p = new Pelicula(nombre,genero,valoracion,director);
							Plus->agregarPeliculas(p);
							cout << "Agregado exitosamente!!"<<endl;
				break;
			}
			case 2: {
				
				break;
			}
			case 3: {
				int Posicion;
				if(!Plus->getPeliculas().empty()) {
					for(int i =0; i<Plus->getPeliculas().size(); i++) {
						Pelicula* cont = Plus->getPeliculas().at(i);
						cout<<(i+1)<<") "<<"Titulo: "<<cont->getTitulo()<<endl;
						cout<<"    Genero: "<<cont->getGenero()<<endl;
						cout<<"    Director: "<<cont->getDirector()<<endl;
						cout<<"    Valoracion: "<<cont->getValoracion()<<endl;
						cout<<endl;
					}
					cout<<"Posicion a eliminar: ";
					cin>>Posicion;
					Posicion = Posicion-1;
					while(Posicion<0||Posicion>Plus->getPeliculas().size()) {
						cout<<"La posicion que usted ingreso no es valida: ";
						cin>>Posicion;
						Posicion=Posicion-1;
					}
					Plus->eliminarPeliculas(Posicion);
					cout<<"Se ha eliminado la peliculas exitosamente"<<endl;
				} else {
					cout<<"No hay pelicula a la cual eliminar "<<endl;
				}
				break;
			}
			case 4: {
                cout << endl;
				Plus->imprimirGeneroPeliculas();
				break;
			}
			case 5: {
                string buscar;
				cin.ignore();
				cout << "Ingrese su busqueda: ";
				getline(cin,buscar);
				cout << endl;
				Plus->buscarPelicula(buscar);
				break;
			}
			case 6: {				
                cout << endl;
				Plus->imprimirValoracionPelicula();
				break;
			}
			case 7: {
				cout << "Saliendo del menu........" << endl;

				break;
			}
		}//fin del switch
	}//fin while menu
	return 0;
}//fin del main
int menu() {
		int opcion;
		cout << "----MENU----" << endl;
		cout << "1. agregar peliculas" << endl;
		cout << "2. modificar pelicula" << endl;
		cout << "3. eliminar pelicula" << endl;
		cout << "4. imprimir peliculas por genero" << endl;
		cout << "5. buscar pelicula" << endl;
		cout << "6. imprimir peliculas ordenadas por valoracion" << endl;
		cout << "7. salir " << endl;
		cout << endl;
		cout << "Ingrese la opcion: ";
		cin >> opcion;
		cout << endl;
		while(opcion < 1 || opcion > 6) {
			cout << "Seleccione una opcion dentro del rango disponible" << endl;
			cout << "Ingrese la opcion: ";
			cin >> opcion;
			cout << endl;
		}
		return opcion;
	}
