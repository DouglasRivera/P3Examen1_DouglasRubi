#ifndef PELICULA_H
#define PELICULA_H
#include <string>
using namespace std;

class Pelicula
{
	private:
		string titulo;
		string director;
		string genero;
		int valoracion;
		
	public: 
		Pelicula();
		~Pelicula();
		Pelicula(string,string,int,string);
		string getGenero();
		string getTitulo();
		string getDirector();
		int getValoracion();
		void setTitulo(string);
		void setGenero(string);
		void setValoracion(int);
		void setDirector(string);
		
};

#endif