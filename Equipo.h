#include<iostream>
using namespace std;

class Equipo //Clase equipo
{
	private:
		int tamEquipo;
	public:
		Equipo(int tamEquipo);
		int gettamEquipo();
		void settamEquipo(int tame);
};

Equipo::Equipo(int tamEquipo) //Constructor Equipo
{
    this->tamEquipo = tamEquipo;
}

//Geters y Seters de Equipo

int Equipo::gettamEquipo(){
	return tamEquipo;
}

void Equipo::settamEquipo(int tame){
	tamEquipo= tame;
}
