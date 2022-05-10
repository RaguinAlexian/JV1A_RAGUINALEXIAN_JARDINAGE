#ifndef PLANTE_CPP
#define PLANTE_CPP

#include "plante.h"
#include <iostream>
#include <string>
#include <time.h>

Plante::Plante() : _nom("Thierry"), _espece("Plante"), _sante(10), _croissance(0),_croissanceMax(30), _eau(0), _taille(0), _valeur(0), _engrais(false), _mort(false) {}
Plante::Plante(std::string name)
{
    _multiple = 1;
    _espece = "Plante";
    _sante = 10;
    _croissance = 0;
    _croissanceMax = 30;
    _eau = 0;
    _taille = 0;
    _engrais = false;
    _mort = false;
    _valeur = 0;
}

std::string Plante::getSante()
{
    if (_mort == true)
    {
        std::string msg = "Votre plante est morte. Vous êtes un terrible jardinier";
        return msg;
    }
    else if (_croissance >= _croissanceMax)
    {
        std::string msg = "Votre plante est prête à être vendue";
        return msg;
    }
    else
    {
        if (_sante > 6)
        {
            std::string msg = "Votre plante est en bonne santé, continuez ainsi";
            return msg;
        }
        else if (_sante > 3)
        {
            std::string msg;
            if(_eau < 1){
                if(_taille > 4){
                    std::string msg = "Votre plante n'est pas tout à fait en état, il faut s'en occuper. Elle manque d'eau et a trop de feuilles.";
                    return msg;
                }
                else if(_taille < 1){
                    std::string msg = "Votre plante n'est pas tout à fait en état, il faut s'en occuper. Elle manque d'eau et est bien trop taillée.";
                    return msg;
                }
                else{
                    std::string msg = "Votre plante n'est pas tout à fait en état, il faut s'en occuper. Elle manque d'eau.";
                    return msg;
                }
            }
            else if(_eau > 5){
                if(_taille > 4){
                    std::string msg = "Votre plante n'est pas tout à fait en état, il faut s'en occuper. Elle se noie et a trop de feuilles.";
                    return msg;
                }
                else if(_taille < 1){
                    std::string msg = "Votre plante n'est pas tout à fait en état, il faut s'en occuper. Elle se noie et est bien trop taillée.";
                    return msg;
                }
                else{
                    std::string msg = "Votre plante n'est pas tout à fait en état, il faut s'en occuper. Elle se noie.";
                    return msg;
                }
            }
            else if (_taille > 4){
                if(_eau > 5){
                    std::string msg = "Votre plante n'est pas tout à fait en état, il faut s'en occuper. Elle se noie et a trop de feuilles.";
                    return msg;
                }
                else if(_eau < 1){
                    std::string msg = "Votre plante n'est pas tout à fait en état, il faut s'en occuper. Elle manque d'eau et a trop de feuilles.";
                    return msg;
                }
                else{
                    std::string msg = "Votre plante n'est pas tout à fait en état, il faut s'en occuper. Elle a trop de feuilles.";
                    return msg;
                }
            }
            else if (_taille < 1){
                if(_eau > 5){
                    std::string msg = "Votre plante n'est pas tout à fait en état, il faut s'en occuper. Elle se noie et est bien trop taillée";
                    return msg;
                }
                else if(_eau < 1){
                    std::string msg = "Votre plante n'est pas tout à fait en état, il faut s'en occuper. Elle manque d'eau et est bien trop taillée.";
                    return msg;
                }
                else{
                    std::string msg = "Votre plante n'est pas tout à fait en état, il faut s'en occuper. Elle est bien trop taillée.";
                    return msg;
                }
            }
        }
        else if (_sante > 1)
        {
            std::string msg;
            if(_eau < 1){
                if(_taille > 4){
                    std::string msg = "Votre plante est sur le point de mourir, vous devez faire quelque chose ! Elle manque d'eau et a trop de feuilles.";
                    return msg;
                }
                else if(_taille < 1){
                    std::string msg = "Votre plante est sur le point de mourir, vous devez faire quelque chose ! Elle manque d'eau et est bien trop taillée.";
                    return msg;
                }
                else{
                    std::string msg = "Votre plante est sur le point de mourir, vous devez faire quelque chose ! Elle manque d'eau.";
                    return msg;
                }
            }
            else if(_eau > 5){
                if(_taille > 4){
                    std::string msg = "Votre plante est sur le point de mourir, vous devez faire quelque chose ! Elle se noie et a trop de feuilles.";
                    return msg;
                }
                else if(_taille < 1){
                    std::string msg = "Votre plante est sur le point de mourir, vous devez faire quelque chose ! Elle se noie et est bien trop taillée.";
                    return msg;
                }
                else{
                    std::string msg = "Votre plante est sur le point de mourir, vous devez faire quelque chose ! Elle se noie.";
                    return msg;
                }
            }
            else if (_taille > 4){
                if(_eau > 5){
                    std::string msg = "Votre plante est sur le point de mourir, vous devez faire quelque chose ! Elle se noie et a trop de feuilles.";
                    return msg;
                }
                else if(_eau < 1){
                    std::string msg = "Votre plante est sur le point de mourir, vous devez faire quelque chose ! Elle manque d'eau et a trop de feuilles.";
                    return msg;
                }
                else{
                    std::string msg = "Votre plante est sur le point de mourir, vous devez faire quelque chose ! Elle a trop de feuilles.";
                    return msg;
                }
            }
            else if (_taille < 1){
                if(_eau > 5){
                    std::string msg = "Votre plante est sur le point de mourir, vous devez faire quelque chose ! Elle se noie et est bien trop taillée";
                    return msg;
                }
                else if(_eau < 1){
                    std::string msg = "Votre plante est sur le point de mourir, vous devez faire quelque chose ! Elle manque d'eau et est bien trop taillée.";
                    return msg;
                }
                else{
                    std::string msg = "Votre plante est sur le point de mourir, vous devez faire quelque chose ! Elle est bien trop taillée.";
                    return msg;
                }
            }
        }
        else
        {
            std::string msg = "Votre plante est morte. Vous êtes un terrible jardinier";
            return msg;
        }
    }
}
int Plante::valeur()
{
    if (_mort == true)
    {
        std::cout << "La plante est morte";
    }
    else if (_croissance >= _croissanceMax)
    {
        if (_sante > 8)
        {
            _valeur = 25 * _multiple;
            return _valeur;
        }
        else if (_sante > 6 && _sante < 9)
        {
            _valeur = 20 * _multiple;
            return _valeur;
        }
        else if (_sante > 4 && _sante < 7)
        {
            _valeur = 15 * _multiple;
            return _valeur;
        }
        else if (_sante > 2 && _sante < 5)
        {
            _valeur = 10 * _multiple;
            return _valeur;
        }
        else if (_sante > 0 && _mort == false)
        {
            _valeur = 5 * _multiple;
            return _valeur;
        }
        else
        {
            return 0;
        }
    }
}
std::string Plante::getNom()
{
    return _nom;
}
std::string Plante::getEspece()
{
    return _espece;
}
std::string Plante::getCroissance(){
    if(_croissanceMax - _croissance <= 0){
        std::string msg = "Votre plante est a fini sa croissance. Elle est prête à être vendue";
        return msg;
    }
    else if(_croissanceMax - _croissance <= 10){
        std::string msg = "Votre plante a presque fini sa croissance. Encore un peu de patience";
        return msg;
    }
    else if(_croissanceMax - _croissance > 10 && _croissanceMax - _croissance <= 20){
        std::string msg = "Votre plante a un peu poussé mais reste loin de la fin. Il lui faudra du temps";
        return msg;
    }
    else{
        std::string msg = "Votre plante est au tout début de sa croissance.";
        return msg;
    }
}
void Plante::tailler()
{
    if (_mort == true)
    {
        std::cout << "La plante est morte";
    }
    else if (_croissance >= _croissanceMax)
    {
        std::cout << "La plante est prête à être vendue";
    }
    else
    {
        _taille = _taille - 2;
    }
}

void Plante::hydrater()
{
    if (_mort == true)
    {
        std::cout << "La plante est morte";
    }
    else if (_croissance >= _croissanceMax)
    {
        std::cout << "La plante est prête à être vendue";
    }
    else
    {
        _eau = _eau + 1;
    }
}

void Plante::pousser()
{
    if (_mort == true)
    {
        std::cout << "La plante est morte";
    }
    else if (_croissance >= _croissanceMax)
    {
        std::cout << "La plante est prête à être vendue";
    }
    else
    {
        int boost = 2;
        _eau = _eau - 4;
        _taille = _taille + 1;
        if (_eau <= 0 || _eau > 5)
        {
            _sante = _sante - 4;
        }
        if (_taille > 4 || _taille <= 0)
        {
            _sante = _sante - 2;
        }
        if (_engrais == true)
        {
            _croissance = _croissance + 2;
        }
        if (_sante < 4)
        {
            _croissance = _croissance + 1;
        }
        else if (_sante < 7)
        {
            _croissance = _croissance + 2;
        }
        else
        {
            _croissance = _croissance + 3;
        }
    }
}
void Plante::mourir()
{
    int proba = 0;
    srand(time(NULL));
    proba = rand() % 100 + 1;
    if (_sante <= 1)
    {
        _mort = true;
        _valeur = 0;
    }
    if (_sante < 4 && proba < 11)
    {
        _mort = true;
        _valeur = 0;
    }
};

#endif