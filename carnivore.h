#ifndef CARNIVORE_H
#define CARNIVORE_H

#include <string>
#include "plante.cpp"

class Carnivore : public Plante
{
protected:
    bool _manger = false;

public:
    Carnivore();
    Carnivore(std::string nom);

    std::string aManger();
    void nourrir();
    std::string digestion();
};
#endif