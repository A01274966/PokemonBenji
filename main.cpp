//POKEMON

//Julio César Gómez González
//A01274966


#include <iostream>
using namespace std;

#include "Equipo.h"
#include "Pokemon.h"
#include "Pocion.h"//Se incluye la clase pocion




int main()
{
//Se crean los objetos heredados de la clase pokemon
Fuego Charmander("Charmander", 04, 90);
Fuego Vulpix("Vulpix",37, 90);
 Hielo Jynx("Jynx", 124, 130);
 Roca Geodude("Geodude", 74, 60);
 Tierra Sandshrew("Sandshrew", 27, 95);
 Planta Oddish("Oddish", 43, 120);
 Pocion Pocion("Pocion", 100);
 Equipo Equipo_player1("EQUIPO DE PLAYER ONE");


//Se imprimen en la consola los datos de los objetos previamente creados 
  cout<<"POKEMONES EXISTENTES:"<<endl;
  cout<<""<< endl;

 cout << "Nombre: " << Charmander.get_nombre() << " - " <<"Numero de Pokedex: " << Charmander.get_numero_pokedex() << 
 " - " << "Vida: "<< Charmander.get_vida() << " - "<< "Dano en ataques: "<< Charmander.get_ataque_normal() << "-" << Charmander.get_ataque_fuego()<<endl; 
 
  cout << "Nombre: " << Vulpix.get_nombre() << " - " <<"Numero de Pokedex: " << Vulpix.get_numero_pokedex() << 
 " - " << "Vida: "<< Vulpix.get_vida() << " - "<< "Dano en ataques: "<< Vulpix.get_ataque_normal() << "-" << Vulpix.get_ataque_fuego()<<endl; 
 
 cout << "Nombre: " << Jynx.get_nombre() << " - " <<"Numero de Pokedex: " << Jynx.get_numero_pokedex() << 
 " - " << "Vida: "<< Jynx.get_vida() << " - "<< "Dano en ataques: "<< Jynx.get_ataque_normal() << "-" << Jynx.get_ataque_hielo()<<endl;  

 cout << "Nombre: " << Geodude.get_nombre() << " - " <<"Numero de Pokedex: " << Geodude.get_numero_pokedex() << 
 " - " << "Vida: "<< Geodude.get_vida() << " - "<< "Dano en ataques: "<< Geodude.get_ataque_normal() << "-" << Geodude.get_ataque_roca()<<endl; 

cout << "Nombre: " << Sandshrew.get_nombre() << " - " <<"Numero de Pokedex: " << Sandshrew.get_numero_pokedex() << 
 " - " << "Vida: "<< Sandshrew.get_vida() << " - "<< "Dano en ataques: "<< Sandshrew.get_ataque_normal() << "-" << Sandshrew.get_ataque_tierra()<<endl; 

cout << "Nombre: " << Oddish.get_nombre() << " - " <<"Numero de Pokedex: " << Oddish.get_numero_pokedex() << 
 " - " << "Vida: "<< Oddish.get_vida() << " - "<< "Dano en ataques: "<< Oddish.get_ataque_normal() << "-" << Oddish.get_ataque_planta()<<endl; 
cout << ""<<endl;
cout<<""<<endl;
//Mediante composicion, creamos un equipo pokemon
cout<<Equipo_player1.get_nombre()<< endl;
cout<<""<<endl;
Equipo_player1.agrega_pokemon_fuego(Charmander);
Equipo_player1.agrega_pokemon_fuego(Vulpix);
Equipo_player1.agrega_pokemon_roca(Geodude);
Equipo_player1.agrega_pokemon_hielo(Jynx);

Equipo_player1.imprime_equipo();

cout<<""<<endl;
cout<<""<<endl;
//Narra una batalla pokemon y muestra como interacutuan los objetos entre si
cout<< "BATALLA POKEMON!" << endl;
cout<<""<<endl;
cout<< "UN ODDISH SALVAJE HA APARECIDO..."<<endl;
cout << "ENTRENADOR UTILIZA A CHARMANDER..."<< endl;
cout << Charmander.get_nombre() <<": Char Charr"<< endl;
cout<< "ODDISH SALVAJE UTILIZA SINTESIS..."<< endl;
Oddish.atacar(Charmander);
cout<< "Dano inflingido: "<< Oddish.get_ataque_planta()<< " - Vida de Charmander: " << Charmander.get_vida()<<endl;
cout << "CHARMANDER UTILIZA ASCUAS..."<<endl;
Charmander.atacar(Oddish);
cout<< Oddish.get_nombre()<< ": Oddish osdishh!"<<endl;
cout<< "Dano inflingido: "<< Charmander.get_ataque_fuego()<< " - Vida de Oddish: " << Oddish.get_vida()<<endl;
cout<< "ODDISH SALVAJE VUELVE A UTILIZAR SINTESIS..."<< endl;
cout<<Oddish.get_nombre()<< ": Odishhh"<< endl;
Oddish.atacar(Charmander);
cout<< "Dano inflingido: "<< Oddish.get_ataque_planta()<< " - Vida de Charmander: " << Charmander.get_vida()<<endl;
cout<<"CHARMANDER UTILIZA ATAQUE NORMAL"<< endl;
Charmander.atacar_normal(Oddish);
cout<< "Dano inflingido: "<< Charmander.get_ataque_normal()<< " - Vida de Oddish: " << Oddish.get_vida()<<endl;
cout<<"ODDISH HA GANADO AGILIDAD..."<< endl;
cout<< "ODDISH SALVAJE UTILIZA SINTESIS..."<< endl;
cout<< "ODDISH SALVAJE UTILIZA SINTESIS..."<< endl;
Oddish.atacar(Charmander);
Oddish.atacar(Charmander);
cout<< "Dano inflingido: "<< 2*Oddish.get_ataque_planta()<< " - Vida de Charmander: " << Charmander.get_vida()<<endl;
cout<< Charmander.get_nombre()<< ": Charrrr!"<<endl;
cout << "CHARMANDER UTILIZA ASCUAS..."<<endl;
Charmander.atacar(Oddish);
cout<< "Dano inflingido: "<< Charmander.get_ataque_fuego()<< " - Vida de Oddish: " << Oddish.get_vida()<<endl;
cout<< "ODDISH SALVAJE UTILIZA ATAQUE NORMAL..."<<endl;
Oddish.atacar_normal(Charmander);
cout<<Charmander.get_nombre()<<": char..."<<endl;
cout<< "Dano inflingido: "<< Oddish.get_ataque_normal()<< " - Vida de Charmander: " << Charmander.get_vida()<<endl;
cout<<"CHARMANDER SE HA DEBILITADO..."<<endl;
cout<<"ENTRENADOR UTILIZA A GEODUDE..."<<endl;
cout<<Geodude.get_nombre()<<": Geo geo"<<endl;
cout<< "ODDISH SALVAJE UTILIZA SINTESIS..."<< endl;
Oddish.atacar(Geodude);
cout<< "Dano inflingido: "<< Oddish.get_ataque_planta()<< " - Vida de Geodude: " << Geodude.get_vida()<<endl;
cout<<"GEODUDE UTILIZA TUMBAROCAS"<<endl;
Geodude.atacar(Oddish);
Geodude.atacar(Oddish);
cout<< "Dano inflingido: "<< Geodude.get_ataque_roca()<< " - Vida de Oddish: " << Oddish.get_vida()<<endl;
cout<<"GOLPE CRITICO!"<<endl;
cout<< "ODDISH SALVAJE UTILIZA ATAQUE NORMAL..."<<endl;
Oddish.atacar_normal(Geodude);
cout<< "Dano inflingido: "<< Oddish.get_ataque_normal()<< " - Vida de Geodude: " << Geodude.get_vida()<<endl;
cout<<"GEODUDE UTILIZA ATAQUE NORMAL"<<endl;
Geodude.atacar_normal(Oddish);
Geodude.atacar_normal(Oddish);
cout<< "Dano inflingido: "<< Geodude.get_ataque_normal()<< " - Vida de Oddish: " << Oddish.get_vida()<<endl;
cout<<"GOLPE CRITICO!"<<endl;
cout<< "ODDISH SALVAJE UTILIZA SINTESIS..."<< endl;
Oddish.atacar(Geodude);
cout<< "Dano inflingido: "<< Oddish.get_ataque_planta()<< " - Vida de Geodude: " << Geodude.get_vida()<<endl;
cout<<"GEODUDE UTLIZA UNA POCION"<<endl;
cout<<Geodude.get_nombre()<< ": Geoodude"<< endl;
Geodude.curar(Pocion.get_puntos_restaurados());
cout<< "Vida curada: "<< Pocion.get_puntos_restaurados()<< " - Vida de Geodude: " << Geodude.get_vida()<<endl;
cout<<"GEODUDE UTILIZA TUMBAROCAS"<<endl;
Geodude.atacar(Oddish);
cout<< "Dano inflingido: "<< Geodude.get_ataque_roca()<< " - Vida de Oddish: " << Oddish.get_vida()<<endl;
cout<<Oddish.get_nombre()<< ": odish...."<<endl;
cout<<"ODDISH SALVAJE SE HA DEBILITADO..."<< endl;
cout<<"HAZ GANADO!"<<endl;

cout<<""<<endl;

}

//Link de github https://github.com/A01274966/PokemonBenji  
//:)






















