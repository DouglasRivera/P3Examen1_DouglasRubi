#ifndef HTHPLUS_H
#define HTHPLUS_H
#include "Pelicula.h"
#include <vector>
#include <iostream>


using namespace std;

class HTHPlus
{
	private:
		vector <Pelicula*> Peliculas;
	public:
		 HTHPlus();
		~HTHPlus();
		void agregarPeliculas(Pelicula*);
		void eliminarPeliculas(int);
		void imprimirGeneroPeliculas();
		void buscarPelicula(string);
		void imprimirValoracionPelicula();
		vector<Pelicula*> getPeliculas(); 
		
};

#endif