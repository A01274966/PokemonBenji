#ifndef TIERRA_H
#define TIERRA_H

//Se incluyen las demas clases heredadas
#include "Fuego.h"
#include "Hielo.h"
#include "Planta.h"
#include "Roca.h"

#include "Pokemon.h"// Se incluye la clase padre
#include <iostream>
using namespace std;


class Tierra: public Pokemon//Se crea una clase llamada fuego heredada de la clase padre pokemon
{
  private:
    //Atributos de la clase hijo
    int ataque_tierra;
  public:
    //constructor de la clase hijo
    Tierra(string n, int np, int at):Pokemon(n, np, 520, 85){
      ataque_tierra = at;
    }
    //Getters y setters de la clase hijo
    int get_ataque_tierra(){
      return ataque_tierra;
    }
    void set_ataque_tierra(int at){
      ataque_tierra = at;
    }

    void atacar(Pokemon &p){
      p.danio(get_ataque_tierra());
    }
    //usar_ataque_tierra();
    /*void Terremoto(Fuego &f){
      f.danio(115);
    }
    void Terremoto(Hielo &h){
      h.danio(75);
    }
    void Terremoto(Planta &p){
      p.danio(75);
    }
    void Terremoto(Tierra &t){
      t.danio(95);
    }
    void Terremoto(Roca &r){
      r.danio(115);
    }*/
    
};

#endif