#ifndef PLANTA_H
#define PLANTA_H

//Se incluyen las demas clases heredadas
#include "Fuego.h"
#include "Hielo.h"
#include "Roca.h"
#include "Tierra.h"

#include "Pokemon.h"// Se incluye la clase padre
#include <iostream>
using namespace std;


class Planta: public Pokemon//Se crea una clase llamada fuego heredada de la clase padre pokemon
{
  private:
    //Atributos de la clase hijo
    int ataque_planta;
    
  public:
    //constructor de la clase hijo
    Planta(string n, int np, int ap):Pokemon(n, np, 500, 80){
      ataque_planta = ap;
    }
    //Getters y setters de la clase hijo
    int get_ataque_planta(){
      return ataque_planta;
    }
    void set_ataque_planta(int ap){
      ataque_planta = ap;
    }
    void atacar(Pokemon &p){
      p.danio(get_ataque_planta());
    }
    //usar_ataque_tierra();

    /*void Sintesis(Fuego &f){
      
      f.danio(100);
    }
    void Sintesis(Hielo &h){
      h.danio(100);
    }
    void Sintesis(Planta &p){
      p.danio(120);
    }
    void Sintesis(Tierra &t){
      t.danio(140);
    }
    void Sintesis(Roca &r){
      t.danio(140);
    }*/
    
};


#endif