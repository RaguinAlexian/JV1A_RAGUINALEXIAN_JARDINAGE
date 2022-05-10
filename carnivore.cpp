#ifndef CARNIVORE_CPP
#define CARNIVORE_CPP

#include "carnivore.h"
#include <string>
#include <iostream>

Carnivore::Carnivore() : Plante()
{
    _nom = "Croqueur";
    _espece = "Carnivore";
    _manger = false;
    _multiple = 1.5;
}
Carnivore::Carnivore(std::string name)
{
    _nom = name;
    _espece = "Carnivore";
    _manger = false;
    _multiple = 1.5;
}

void Carnivore::nourrir()
{
    _manger = true;
}

std::string Carnivore::aManger()
{
    if (_manger == false)
    {
        _sante = _sante - 3;
        std::string msg = "Votre plante a faim.";
        return msg;
    }
}

std::string Carnivore::digestion()
{
    if (_manger == true)
    {
        std::string msg = "Votre plante est en pleine digestion de son dernier repas";
        return msg;
    }
    else
    {
        std::string msg = "Votre plante a la gueule grande ouverte prête à dévorer une mouche";
        return msg;
    }
}
#endif