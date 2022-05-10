#ifndef FLEUR_H
#define FLEUR_H

#include <string>
#include "plante.cpp"

class Fleur : public Plante
{
protected:
    bool _fane = false;
    int _jour = 0;

public:
    Fleur();
    Fleur(std::string nom);

    void faner();
    void aFaner();
    int tuto();
};
#endif