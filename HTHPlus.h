#ifndef HTHPLUS_H
#define HTHPLUS_H

class HTHPlus
{
		private:
		vector<Pelicula> peliculas;
	
	public:
		HTHPlus();
		HTHPlus(vector<Pelicula>);
		void agregarPelicula(Pelicula);
		void actualizarPelicula(int,Pelicula);
		void eliminarPelicula(int);
		void imprimir();
		void imprimirPorGenero();
		void buscarPelicula(string);
		void ordenarPeliculasPorValoracion();
};

#endif