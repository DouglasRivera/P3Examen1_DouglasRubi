#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;


HTHPlus::HTHPlus(){
	
}

HTHPlus::HTHPlus(vector<Pelicula> _pelis){
	peliculas = _pelis;
}

void HTHPlus::agregarPelicula(Pelicula _pelicula){
	peliculas.push_back(_pelicula);
	cout<<"Pelicula agregada"<<endl;
}

void HTHPlus::actualizarPelicula(int index,Pelicula _peli){
	unsigned int size = peliculas.size();
	if(index>0){
		index=-1;
		peliculas[index] = _peli;
		cout<<"Pelicula eliminada"<<endl;
	}
	cout<<"Pelicula no encontrada"<<endl;
}

void HTHPlus::eliminarPelicula(int index){
	unsigned int size = peliculas.size();
	if(index>0){
		index-=1;
		peliculas.erase(peliculas.begin()+index);
		cout<<"Pelicula eliminada"<<endl;
	}
	cout<<"Pelicula no encontrada"<<endl;
}

void HTHPlus::imprimir(){
	unsigned int size = peliculas.size();
	for(unsigned int i = 0; i < size;i++){
		cout<<(i+1)<<". "<< peliculas[i].getTitulo()<<endl;
	}
}

void HTHPlus::imprimirPorGenero(){
	unsigned int size = peliculas.size();
	int j = 0;
	for(unsigned int i = 0; i < size;i++){
		while(j < size){
			if(peliculas[i].getGenero()==peliculas[j].getGenero()){
				cout<<peliculas[i].getGenero()<<endl;
				cout<<peliculas[i].getDirector()<<"-"<<peliculas[i].getGenero()<<"-"<<peliculas[i].getValoracion()<<"/5";
			}
			j++;
		}
	}
}
void HTHPlus::buscarPelicula(string buscar){
	unsigned int size = peliculas.size();
	for(unsigned int i = 0; i < size;i++){
		if(peliculas[i].getTitulo().find(buscar) != string::npos || peliculas[i].getDirector().find(buscar) != string::npos || peliculas[i].getGenero().find(buscar) != string::npos){
			cout<<peliculas[i].getTitulo()<<"-"<<peliculas[i].getDirector()<<"-"<<peliculas[i].getGenero()<<"-"<<peliculas[i].getValoracion()<<"/5";
		}
	}
}
void HTHPlus::ordenarPeliculasPorValoracion(){
	sort(peliculas.begin(), peliculas.end(), Comparacion);
	unsigned int size = peliculas.size();
	for(unsigned int i = 0; i < size;i++){
		cout<<peliculas[i].getTitulo()<<"-"<<peliculas[i].getDirector()<<"-"<<peliculas[i].getGenero()<<"-"<<peliculas[i].getValoracion()<<"/5";
	}
}