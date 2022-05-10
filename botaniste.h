#ifndef BOTANISTE_H
#define BOTANISTE_H

#include <iostream>
#include <string>
#include <vector>
#include "plante.cpp"

class Botaniste
{
protected:
    std::string _nom;
    std::vector<Plante *> _tableau;
    int _money;

public:
    // Constructeurs
    Botaniste();
    Botaniste(std::string nom);
    
    int modifMoney(int change);
    void getList();
    std::vector<Plante *> addList();
};

#endif