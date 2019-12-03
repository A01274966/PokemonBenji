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

public: //Constructor de Pokemon, geter y seter de nombre , vida, dano a y dano b 
    Pokemon(string n, int np, int v, int an){
    nombre = n;
    vida = v;
    numero_pokedex = np;
    ataque_normal = an;
    }

    int get_vida(){
      return vida;
    }

    void set_vida(int v){
      vida= v;
    }

    int get_ataque_normal(){
      return ataque_normal;
    }

    void set_ataque_normal(int an){
      ataque_normal= an;
    }

    string get_nombre(){
      return nombre;
    }

    void set_nombre(string n){
      nombre= n;
    }

    int get_numero_pokedex(){
      return numero_pokedex;
    }

    void set_numero_pokedex(int np){
      numero_pokedex = np;  
    }
    //Dano a pokemones
    void danio(int danio){
      vida = vida - danio;
    }
    //Curar dano
    void curar(float curar){
      vida = vida+ curar;
    }
};

#endif