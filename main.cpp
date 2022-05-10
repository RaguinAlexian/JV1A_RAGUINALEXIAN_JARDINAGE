#include <iostream>
#include <string>
#include "plante.cpp"
#include "carnivore.cpp"
#include "fleur.cpp"
#include <vector>

int main()
{
    Plante *maPlante = new Plante();
    int choix;
    bool dormir = false;
    std::cout << "Vous êtes désormais un jardinier. Vous avez pour le moment une plante, occupez vous en avant d'en acheter une autre. Que voulez-vous faire ?" << std::endl;
    while (dormir == false)
    {
        std::cout << "1-L'arroser 2-La tailler 3-Aller dormir" << std::endl;
        std::cin >> choix;
        if (choix == 1)
        {
            maPlante->hydrater();
        }
        else if (choix == 2)
        {
            maPlante->tailler();
        }
        else if (choix == 3)
        {
            maPlante->pousser();
            dormir = true;
        }
    }
    dormir = false;
    maPlante->mourir();
    std::cout << "Voyons voir comment vous vous en sortez pour votre premier jour." << std::endl;
    std::cout << "Le nom de votre plante est : " << maPlante->getNom() << ". Voyons voir comment elle va : " << maPlante->getSante() << std::endl;
    std::cout << "Votre but est d'acheter des plantes, les faire pousser puis ainsi de suite. Vous pourrez à tout moment voir la valeur de votre plante si elle a suffisamment poussé. Regardons où en est la votre :" << maPlante->getCroissance();
    std::cout << "Bien, ceci était votre premier, essai. Maintenant passons à l'étape suivante, les plantes carnivores :" << std::endl;
    Carnivore *monCarnivore = new Carnivore();
    while (dormir == false)
    {
        std::cout << "0-observer si elle a faim 1-L'arroser 2-La tailler 3-Aller dormir" << std::endl;
        std::cin >> choix;
        if (choix == 1)
        {
            monCarnivore->hydrater();
        }
        else if (choix == 2)
        {
            monCarnivore->tailler();
        }
        else if (choix == 3)
        {
            monCarnivore->pousser();
            dormir = true;
        }
        else if (choix == 0)
        {
            std::cout << monCarnivore->digestion() << std::endl;
            std::cout << "La nourrir ? 1-Oui 2-Non" << std::endl;
            std::cin >> choix;
            if (choix == 1)
            {
                monCarnivore->nourrir();
            }
        }
    }
    dormir = false;
    maPlante->mourir();
    std::cout << "Voyons voir comment vous vous en sortez pour votre deuxième jour." << std::endl;
    std::cout << "Le nom de votre plante est : " << monCarnivore->getNom() << ". Voyons voir comment elle va : " << monCarnivore->getSante() << " " << monCarnivore->aManger() << std::endl;
    std::cout << "Et sa croissance ? : " << monCarnivore->getCroissance() << std::endl;
    std::cout << "Pour terminer, il y a également des fleurs, en voici une proche de l'éclosion. Ça valeur change énormément si elle vient d'éclore. Mais trop attendre avant de la vendre va la faner attention !" << std::endl;
    Fleur * maFleur = new Fleur();
    maFleur->hydrater();
    maFleur->hydrater();
    maFleur->hydrater();
    maFleur->hydrater();
    maFleur->hydrater();
    maFleur->pousser();
    while(maFleur->tuto() < 50){
        maFleur->hydrater();
        maFleur->hydrater();
        maFleur->hydrater();
        maFleur->hydrater();
        maFleur->pousser();
        maFleur->hydrater();
        maFleur->hydrater();
        maFleur->hydrater();
        maFleur->hydrater();
        maFleur->tailler();
        maFleur->pousser();
    }
    std::cout << "Regardons son état. " << maFleur->getCroissance() << std::endl;
    std::cout << maFleur->valeur() << std::endl;
}