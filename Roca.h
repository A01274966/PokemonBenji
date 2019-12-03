#ifndef ROCA_H
#define ROCA_H

//Se incluyen las demas clases heredadas
#include "Fuego.h"
#include "Hielo.h"
#include "Planta.h"
#include "Tierra.h"

#include "Pokemon.h"// Se incluye la clase padre
#include <iostream>
using namespace std;


class Roca: public Pokemon//Se crea una clase llamada fuego heredada de la clase padre pokemon
{
  private:
    //Atributos de la clase hijo
    int ataque_roca;
  public:
    //constructor de la clase hijo
    Roca(string n, int np, int ar):Pokemon(n, np, 600, 40){
      ataque_roca = ar;
    }
    //Getters y setters de la clase hijo
    int get_ataque_roca(){
      return ataque_roca;
    }
    void set_ataque_roca(int ar){
      ataque_roca = ar;
    }

    void atacar(Pokemon &p){
      p.danio(get_ataque_roca());
    }
    /*void Tumbarocas(Fuego &f){
      f.danio(80);
    }
    void Tumbarocas(Hielo &h){
      h.danio(80);
    }
    void Tumbarocas(Planta &p){
      p.danio(40);
    }
    void Tumbarocas(Tierra &t){
      t.danio(40);
    }
    void Tumbarocas(Roca &r){
      t.danio(60);
    }*/
    
};

#endif