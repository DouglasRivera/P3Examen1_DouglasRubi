#include "HTHPlus.h"

HTHPlus::HTHPlus() {
}

HTHPlus::~HTHPlus() {
	for(int i = 0; i<Peliculas.size(); i++) {
		delete Peliculas.at(i);
	}
}

vector<Pelicula*> HTHPlus::getPeliculas() {
	return this->Peliculas;
}

void HTHPlus::agregarPeliculas(Pelicula* Peliculaa) {
	Peliculas.push_back(Peliculaa);
}

void HTHPlus::eliminarPeliculas(int de) {
	Peliculas.erase(begin(Peliculas)+de);
};

void HTHPlus::buscarPelicula(string Nombre) {
	for(int i = 0; i < Peliculas.size(); i++) {
		Pelicula* P = Peliculas.at(i);
		string tempNombre = P->getTitulo();
		if(tempNombre.find(Nombre) != string::npos) {
			cout<<P->getTitulo()<<" - "<<P->getDirector()
			<<" - "<<P->getGenero()<<" - "<<
			P->getValoracion()<<"/5"<<endl;
		}
	}
}

void HTHPlus::imprimirValoracionPelicula() {
	int c = 5;
	for (int i=0; i<5; i++) {
		for (int j=0; j<Peliculas.size(); j++) {
			Pelicula* pv = Peliculas.at(j);
			int aux = pv->getValoracion();
			if (aux==c) {
				cout<<pv->getTitulo()<<" - "<<
				pv->getDirector()<<" - "<<
				pv->getGenero()<<" - "<<
				pv->getValoracion()<<"/5"<<endl;
			}
		}
		c--;
	}
}

void HTHPlus::imprimirGeneroPeliculas() {
	bool confirm = false;
	string genero ="";
	vector<string> gener;
	if(!Peliculas.empty()) {
		for(int i = 0; i<Peliculas.size(); i++) {
			if(!gener.empty()) {
				for(int j = 0; j<gener.size(); j++) {
					string Nombre = gener.at(j);
					Pelicula* pg = Peliculas.at(i);
					genero = pg->getGenero();
					if(Nombre==genero) {
						confirm = true;
					}
				}
				if(!confirm) {
					gener.push_back(genero);
				}
			} else {
				Pelicula* ptemp = Peliculas.at(0);
				string Generos = ptemp->getGenero();
				gener.push_back(Generos);
			}
		}
		for(int i = 0; i<gener.size(); i++) {
			string Nombre = gener.at(i);
			cout<<Nombre<<":"<<endl;
			for(int j = 0; j<Peliculas.size(); j++) {
				Pelicula* cont = Peliculas.at(j);
				string genero = cont->getGenero();
				if(Nombre == genero) {
					cout<<cont->getTitulo()<<" - "<<cont->getDirector()<<" - "<<cont->getValoracion()<<"/5"<<endl;
				}
			}
			cout<<endl;
		}
	} else {
		cout<<"No hay ninguna pelicula en la cartelera "<<endl;
	}
}