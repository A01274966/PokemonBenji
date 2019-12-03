#ifndef FUEGO_H
#define FUEGO_H

//Se incluyen las demas clases heredadas
#include "Hielo.h"
#include "Planta.h"
#include "Roca.h"
#include "Tierra.h"

#include "Pokemon.h"// Se incluye la clase padre
#include <iostream>
using namespace std;


class Fuego: public Pokemon // Se crea una clase llamada fuego heredada de la clase padre pokemon
{
  //Atributos de la clase hijo
  private:
    int ataque_fuego;
  public:
  //constructor de la clase hijo
    Fuego(string n, int np, int af):Pokemon(n, np, 550, 60){
      ataque_fuego = af;
    }
    //Getters y setters de la clase hijo
    int get_ataque_fuego(){
      return ataque_fuego;
    }
    void set_ataque_fuego(int af){
      ataque_fuego = af;
    }
    //Atacar a otros objetos
    void atacar(Pokemon &p){
      p.danio(get_ataque_fuego());
    }
    //usar_ataque_tierra();

    /*int Ascuas(Fuego &f){
      f.danio(90);
    }
    int Ascuas(Hielo &h){
      h.danio(110);
    }
    int Ascuas(Planta &p){
      p.danio(110);
    }
    int Ascuas(Tierra &t){
      t.danio(70);
    }
    int Ascuas(Roca &r){
      t.danio(70);
    }*/
    
};


#endif