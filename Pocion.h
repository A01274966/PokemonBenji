#include<iostream>
using namespace std;
#include "Pokemon.h"

class Pocion //Clase pocion
{
private: //Atributos nombre y puntos restaurados en privado
    string nombre;
    
    int puntos_restaurados;
    
public: //Constructor de pocion,  geter y seter de nombre y puntos restaurados
    Pocion(string n, int pr){
    nombre = n;
    puntos_restaurados = pr;
    }
    
    string get_nombre(){
      return nombre;
    }

    void set_nombre(string n){
      nombre = n;
    }

    int get_puntos_restaurados(){
      return puntos_restaurados;
    }

    void set_puntos_restaurados(int pr){
      puntos_restaurados = pr;
    }

    void restaurar_vida(Pokemon &p){
      p.curar(puntos_restaurados);
    }
};
      


