#include "Pokemon.h"
#include<iostream>
using namespace std;

class Equipo //Clase equipo
{
	private: //Atributos de la clase equipo
    string nombre;
    Fuego poke_fu[100];
    Hielo poke_hi[100];
    Tierra poke_ti[100];
    Roca poke_ro[100];
    Planta poke_pl[100];

    int p_fu, p_hi, p_ti, p_ro, p_pl;

	public: //Metodos de la clase Equipo
    Equipo(){};
    Equipo(string nom);
    string get_nombre();
    void agrega_pokemon_fuego(Fuego);
    void agrega_pokemon_hielo(Hielo);
    void agrega_pokemon_tierra(Tierra);
    void agrega_pokemon_roca(Roca);
    void agrega_pokemon_planta(Planta);
    void imprime_equipo();


};

Equipo::Equipo(string nom){
  nombre = nom;
  p_fu = 0;
  p_hi = 0;
  p_ti = 0;
  p_ro = 0;
  p_pl = 0;
}

string Equipo::get_nombre() //geter de equipo
{
  return nombre;
}

void Equipo::agrega_pokemon_fuego(Fuego a){
  poke_fu[p_fu] = a;
  p_fu++;
}

void Equipo::agrega_pokemon_hielo(Hielo a){
  poke_hi[p_hi] = a;
  p_hi++;
}

void Equipo::agrega_pokemon_tierra(Tierra a){
  poke_ti[p_ti] = a;
  p_ti++;
}

void Equipo::agrega_pokemon_roca(Roca a){
  poke_ro[p_ro] = a;
  p_ro++;
}

void Equipo::agrega_pokemon_planta(Planta a){
  poke_pl[p_pl] = a;
  p_pl++;
}

void Equipo::imprime_equipo(){  //Imprime los pokemones que tienes en tu equipo
  cout << "Pokemones Fuego:" << endl;
  for(int i = 0; i < p_fu; i ++){
    cout << "\t"<< poke_fu[i].get_nombre()<< " "  << endl;
  }
  cout << "Pokemones Hielo:" << endl;
  for(int i = 0; i < p_hi; i ++){
    cout << "\t"<< poke_hi[i].get_nombre() << " " << endl;
  }
  cout << "Pokemones Tierra:" << endl;
  for(int i = 0; i < p_ti; i ++){
    cout << "\t" << poke_ti[i].get_nombre() << " " << endl;
  }
    cout << "Pokemones Roca:" << endl;
  for(int i = 0; i < p_ro; i ++){
    cout << "\t" << poke_ro[i].get_nombre() << " " << endl;
  }
    cout << "Pokemones Planta:" << endl;
  for(int i = 0; i < p_pl; i ++){
    cout << "\t" << poke_pl[i].get_nombre() << " " << endl;
  }
}