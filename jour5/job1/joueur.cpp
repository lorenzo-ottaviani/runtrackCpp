#include <iostream>
#include "joueur.hpp"

void Joueur::afficherPosition() const {
    std::cout << "La position du joueur sur la carte est : (" << x << ", " << y << ")" << std::endl;
}

void Joueur::deplacerGauche(int pas) {
    x -= pas;
}

void Joueur::deplacerDroite(int pas) {
    x += pas;
}

void Joueur::deplacerBas(int pas) {
    y -= pas;
}

void Joueur::deplacerHaut(int pas) {
    y += pas;
}
