#pragma once

class Joueur {
public:
    int x;
    int y;

    void afficherPosition() const;

    void deplacerGauche(int pas);
    void deplacerDroite(int pas);
    void deplacerBas(int pas);
    void deplacerHaut(int pas);
};
