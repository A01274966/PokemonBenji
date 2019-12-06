 #ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
using namespace std;


class Pokemon //Clase pokemon
{
private: //Atributos nombre, vida, ataque 1, ataque 2 
    string nombre;

    int numero_pokedex;
    int vida;
    int ataque_normal;
public:
    Pokemon(string n, int np, int v, int an); //Metodos de la clase pokemon
    Pokemon();
    string get_nombre();
    int get_numero_pokedex();
    int get_vida();
    int get_ataque_normal();

    void set_nombre(string);
    void set_numero_pokedex(int);
    void set_vida(int);
    void set_ataque_normal(int);

    void danio(int danio);
    void curar(float curar);
    void atacar_normal(Pokemon &p);
};

Pokemon::Pokemon(){}

Pokemon::Pokemon(string n, int np, int v, int an){ //constructor de la clase pokemon
  nombre = n;
  vida = v;
  numero_pokedex = np;
  ataque_normal = an;
}

string Pokemon::get_nombre(){ //Geters y setters de la clase pokemon
    return nombre;
  }
int Pokemon::get_numero_pokedex(){
    return numero_pokedex;
  }
int Pokemon::get_vida(){
    return vida;
 }
int Pokemon::get_ataque_normal(){
    return ataque_normal;
  }
void Pokemon::set_nombre(string n){
    nombre = n;
}
void Pokemon::set_numero_pokedex(int np){
    numero_pokedex = np;
}
void Pokemon::set_vida(int v){
    vida = v;
}
void Pokemon::set_ataque_normal(int an){
    ataque_normal = an;
}
void Pokemon::danio(int danio){ //Resta vida
    vida = vida - danio;
}
void Pokemon::curar(float curar){ //suma vida
    vida = vida+ curar;
}
void Pokemon::atacar_normal(Pokemon &p){ //hace danio
    p.danio(get_ataque_normal());
}





class Fuego: public Pokemon // Se crea una clase llamada fuego heredada de la clase padre pokemon
{
  //Atributos de la clase hijo
  private:
    int ataque_fuego;
  public:
    Fuego(){};
    Fuego(string n, int np, int af):Pokemon(n, np, 550, 60){
      ataque_fuego= af;
    }
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
};

class Hielo: public Pokemon//Se crea una clase llamada fuego heredada de la clase padre pokemon
{
  private:
    //Atributos de la clase hijo
    int ataque_hielo;
  public:
    Hielo(){};
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
};

class Tierra: public Pokemon//Se crea una clase llamada fuego heredada de la clase padre pokemon
{
  private:
    //Atributos de la clase hijo
    int ataque_tierra;
  public:
    Tierra(){};
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
};

class Planta: public Pokemon//Se crea una clase llamada fuego heredada de la clase padre pokemon
{
  private:
    //Atributos de la clase hijo
    int ataque_planta;
    
  public:
    Planta(){};
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
};

class Roca: public Pokemon//Se crea una clase llamada fuego heredada de la clase padre pokemon
{
  private:
    //Atributos de la clase hijo
    int ataque_roca;
  public:
    Roca(){};
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
};

#endif
