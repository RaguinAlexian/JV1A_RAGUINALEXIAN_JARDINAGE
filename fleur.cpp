#ifndef FLEUR_CPP
#define FLEUR_CPP

#include "Fleur.h"
#include <string>
#include <iostream>

Fleur::Fleur() : Plante()
{
    _nom = "Fleur canard";
    _espece = "Fleur";
    _fane = false;
    _croissanceMax = 50;
    _jour = 0;
}
Fleur::Fleur(std::string name)
{
    _nom = name;
    _espece = "Fleur";
    _croissanceMax = 50;
    _fane = false;
    _jour = 0;
}

void Fleur::faner()
{
    if (_jour > 3)
    {
        _fane = true;
    }
}

void Fleur::aFaner()
{
    if (_fane == true)
    {
        _multiple = 0.1;
    }
    else if (_croissance >= _croissanceMax)
    {
        _multiple = 2;
        _jour = _jour + 1;
    }
    else{
        _multiple = 1;
    }
}

int Fleur::tuto(){
    return _croissance;
}

#endif