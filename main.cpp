//POKEMON

//Julio César Gómez González
//A01274966


#include <iostream>
using namespace std;


#include "Fuego.h"//Se incluyen las sub clases Fuego, Hielo, Planta, Roca y Tierra
#include "Hielo.h"
#include "Planta.h"
#include "Roca.h"
#include "Tierra.h"
#include "Pocion.h"//Se incluye la clase pocion




int main()
{
//Se crean los objetos heredados de la clase pokemon
 Fuego Charmander("Charmander", 04, 90);
 Hielo Jynx("Jynx", 124, 130);
 Roca Geodude("Geodude", 74, 60);
 Tierra Sandshrew("Sandshrew", 27, 95);
 Planta Oddish("Oddish", 43, 120);
 Pocion Pocion("Pocion", 100);

//Se imprimen en la consola los datos de los objetos previamente creados 
 cout << "Nombre: " << Charmander.get_nombre() << " - " <<"Numero de Pokedex: " << Charmander.get_numero_pokedex() << 
 " - " << "Vida: "<< Charmander.get_vida() << " - "<< "Dano en ataques: "<< Charmander.get_ataque_normal() << "-" << Charmander.get_ataque_fuego()<<endl; 
 
 cout << "Nombre: " << Jynx.get_nombre() << " - " <<"Numero de Pokedex: " << Jynx.get_numero_pokedex() << 
 " - " << "Vida: "<< Jynx.get_vida() << " - "<< "Dano en ataques: "<< Jynx.get_ataque_normal() << "-" << Jynx.get_ataque_hielo()<<endl;  

 cout << "Nombre: " << Geodude.get_nombre() << " - " <<"Numero de Pokedex: " << Geodude.get_numero_pokedex() << 
 " - " << "Vida: "<< Geodude.get_vida() << " - "<< "Dano en ataques: "<< Geodude.get_ataque_normal() << "-" << Geodude.get_ataque_roca()<<endl; 

cout << "Nombre: " << Sandshrew.get_nombre() << " - " <<"Numero de Pokedex: " << Sandshrew.get_numero_pokedex() << 
 " - " << "Vida: "<< Sandshrew.get_vida() << " - "<< "Dano en ataques: "<< Sandshrew.get_ataque_normal() << "-" << Sandshrew.get_ataque_tierra()<<endl; 

cout << "Nombre: " << Oddish.get_nombre() << " - " <<"Numero de Pokedex: " << Oddish.get_numero_pokedex() << 
 " - " << "Vida: "<< Oddish.get_vida() << " - "<< "Dano en ataques: "<< Oddish.get_ataque_normal() << "-" << Oddish.get_ataque_planta()<<endl; 

}




























