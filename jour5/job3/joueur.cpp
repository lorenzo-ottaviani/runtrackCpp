#include <iostream>
#include <string>
#include "joueur.hpp"

Joueur::Joueur() : x(0), y(0), nom("Joueur 1") {}

Joueur::Joueur(int posX, int posY) : x(posX), y(posY), nom("Joueur 1") {}

Joueur::Joueur(int posX, int posY, std::string nomJoueur) : x(posX), y(posY), nom(nomJoueur) {}

int Joueur::get_x() const {
    return x;
}

int Joueur::get_y() const {
    return y;
}

std::string Joueur::get_nom() const {
    return nom;
}

void Joueur::afficherPosition() const {
    std::cout << "La position du joueur " << nom << " sur la carte est : (" << x << ", " << y << ")" << std::endl;
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
