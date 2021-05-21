#ifndef PELICULA_H
#define PELICULA_H

class Pelicula
{
		private:
		string titulo;
		string director;
		string genero;
		int valoracion;
	
		public:
		Pelicula(string, string, string, int);
		void setTitulo(string);
		void setDirector(string);
		void setGenero(string);
		void setValoracion(int);
		string getTitulo();
		string getDirector();
		string getGenero();
		int getValoracion();
};

#endif