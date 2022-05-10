#ifndef PLANTE_H
#define PLANTE_H

#include <iostream>
#include <string>

class Plante
{
protected:
    std::string _nom;
    std::string _espece;
    int _croissance;
    int _croissanceMax;
    int _sante;
    int _eau;
    int _taille;
    int _valeur;
    int _multiple;
    bool _engrais;
    bool _mort;

public:
    // Constructeurs
    Plante();
    Plante(std::string nom);

    int valeur();
    std::string getSante();
    std::string getNom();
    std::string getEspece();
    std::string getCroissance();
    void tailler();
    void mourir();
    void pousser();
    void hydrater();
};

#endif