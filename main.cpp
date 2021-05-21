#include <iostream>
#include "HTHPlus.h"
#include "Pelicula.h"

using std::cout;
using std::getline;
using std::cin;
using std::endl;
using std::string;

HTHPlus* Plus;

using namespace std;

int menu();

int main() {
	int opcion;
	while((opcion = menu()) != 7) {
		switch (opcion) {
			case 1: {
				string Pelicula = 0;
				string Director = 0;
				string Genero = 0;
			
				cout << "Ingrese Nombre Pelicula: ";
				getline(cin, Pelicula);
			
				cout << "Ingrese Nombre Director: ";
				getline(cin, Director);
			
				cout << "Ingrese Genero: ";
				getline(cin, Genero);
			
				Plus->addMovie(new Pelicula(Pelicula, Director, Genero));
				break;
			}
			case 2: {
				
				break;
			}
			case 3: {
				
				break;
			}
			case 4: {
                
				break;
			}
			case 5: {
                 
				break;
			}
			case 6: {				

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
