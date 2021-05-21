#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;


bool Comparacion(Pelicula peli1, Pelicula peli2) {
  if (peli1.getValoracion() < peli2.getValoracion()) {
    return false;
  } else {
     return true;
  }
}

Pelicula::Pelicula(string _titulo, string _director, string _genero, int _valoracion){
	titulo = _titulo;
	director = _director;
	genero = _genero;
	valoracion = _valoracion;
}

void Pelicula::setTitulo(string _titulo){
	titulo = _titulo;
}

string Pelicula::getTitulo(){
	return titulo;
}

void Pelicula::setDirector(string _director){
	director = _director;
}

string Pelicula::getDirector(){
	return director;
}

void Pelicula::setGenero(string _genero){
	genero = _genero;
}

string Pelicula::getGenero(){
	return genero;
}

void Pelicula::setValoracion(int _val){
	valoracion = _val;
}

int Pelicula::getValoracion(){
	return valoracion;
}


int main()
{
	vector<Pelicula> pelis; 
	
	HTHPlus hthPlus(pelis);
	// random
	int valoracion = rand()%(5-1 + 1) + 1;
	Pelicula peli("Prueba","Autor","Genero",valoracion);
	hthPlus.agregarPelicula(peli);
	
	hthPlus.imprimir();
	system("pause");
	return 0;
}