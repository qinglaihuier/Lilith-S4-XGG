#include<iostream>
using namespace std;
#include "Pachirish.h"
#include "Lapras.h"
#include "Furret.h"
#include"PokemonManage.h"
int main() {

	  Pokemon* a = PokemonManage::getPokemon("Lapras");
	 a->Eat();
	 a->Skill();
}