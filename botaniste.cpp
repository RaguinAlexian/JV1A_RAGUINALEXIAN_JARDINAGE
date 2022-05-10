#ifndef BOTANISTE_CPP
#define BOTANISTE_CPP

#include "botaniste.h"
#include <iostream>
#include <string>

Botaniste::Botaniste() : _nom("Patron"), _money(0), _tableau(){}
Botaniste::Botaniste(std::string name)
{
    _money = 0;
}

int Botaniste::modifMoney(int change){
    _money = _money + change;
}

void Botaniste::getList(){
    for(int i =0; i<_tableau.size(); i++){
      std::cout << _tableau(i);
   } 
}

std::vector<Plante *> Botaniste::addList(NOUVELLE_PLANTE){
    _tableau.push_back(NOUVELLE_PLANTE);
}

#endif