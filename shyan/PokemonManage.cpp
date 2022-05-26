#include "PokemonManage.h"
#include "Lapras.h"
#include "Pachirish.h"
#include "Furret.h"
#include<iostream>
 Pokemon* PokemonManage::getPokemon(std::string name) {
	if (name == "Lapras") return new Lapras();
	if (name == "Pachirish") return new Pachirish();
	if (name == "Furret") return new Furret();
	
}