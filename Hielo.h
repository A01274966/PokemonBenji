#ifndef HIELO_H
#define HIELO_H

//Se incluyen las demas clases heredadas
#include "Fuego.h"
#include "Planta.h"
#include "Roca.h"
#include "Tierra.h"

#include "Pokemon.h"// Se incluye la clase padre
#include <iostream>
using namespace std;


class Hielo: public Pokemon//Se crea una clase llamada fuego heredada de la clase padre pokemon
{
  private:
    //Atributos de la clase hijo
    int ataque_hielo;
  public:
    //constructor de la clase hijo
    Hielo(string n, int np, int ah):Pokemon(n, np, 480, 90){
      ataque_hielo = ah;
    }
    //Getters y setters de la clase hijo    
    int get_ataque_hielo(){
      return ataque_hielo;
    }
    void set_ataque_hielo(int ah){
      ataque_hielo = ah;
    }
    void atacar(Pokemon &p){
      p.danio(get_ataque_hielo());
    }
    //usar_ataque_tierra();

    /*void Ventisca(Fuego &f){
      f.danio(110);
    }
    void Ventisca(Hielo &h){
      h.danio(130);
    }
    void Ventisca(Planta &p){
      p.danio(150);
    }
    void Ventisca(Tierra &t){
      t.danio(150);
    }
    void Ventisca(Roca &r){
      t.danio(110);
    }*/
    
};

#endif