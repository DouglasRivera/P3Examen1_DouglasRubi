#include "Pelicula.h"

Pelicula::Pelicula(){
}

Pelicula::~Pelicula(){
}

Pelicula::Pelicula(string titulo, string genero,int valoracion,string director){
	this->titulo=titulo;
	this->genero=genero;
	this->valoracion=valoracion;
	this->director=director;
}

string Pelicula::getGenero(){
	return this->genero;
}

string Pelicula::getTitulo(){
	return this->titulo;
}

int Pelicula::getValoracion(){
	return this->valoracion;
}

string Pelicula::getDirector(){
	return this->director;
}

void Pelicula::setTitulo(string titulo){
 	this->titulo = titulo; 
}; 
 
void Pelicula::setGenero(string genero){
 	this->genero = genero; 
}; 

void Pelicula::setValoracion(int valoracion){
 	this->valoracion = valoracion; 
}; 
 

void Pelicula::setDirector(string director){
 	this->director = director; 
};