#pragma once
#include <string>

class Joueur {
private:
    int x;
    int y;
    std::string nom;

public:
    /* Constructeurs */
    Joueur();  // ici x = 0 et y = 0
    Joueur(int posX, int posY);
    Joueur(int posX, int posY, std::string nomJoueur);

    /* Getters */
    int get_x() const;  // Permet de récupérer la coordonnée en x
    int get_y() const;  // Permet de récupérer la coordonnée en y
    std::string get_nom() const;  // Permet de récupérer le nom

    /* Setters */
    void set_x(int x);
    void set_y(int y);
    void set_nom(std::string nom);

    /* Affichage des attributs */
    void afficherPosition() const;

    /* Déplacements du joueur */
    void deplacerGauche(int pas);
    void deplacerDroite(int pas);
    void deplacerBas(int pas);
    void deplacerHaut(int pas);
};
