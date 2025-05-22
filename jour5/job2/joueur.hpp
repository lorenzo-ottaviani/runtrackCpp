#pragma once

class Joueur {
private:
    int x;
    int y;

public:
    Joueur(int posX = 0, int posY = 0);  // Constructeur

    int get_x() const;  // Permet de récupérer la coordonnée en x
    int get_y() const;  // Permet de récupérer la coordonnée en y

    void afficherPosition() const;

    void deplacerGauche(int pas);
    void deplacerDroite(int pas);
    void deplacerBas(int pas);
    void deplacerHaut(int pas);
};
