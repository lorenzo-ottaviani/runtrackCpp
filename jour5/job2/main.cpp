/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 22/05/2025 9h07
* But du programme :
*    Déplacer un joueur.
* Entrée : ∅
* Sortie : Affiche les mouvements du joueur dans le terminal.
*/

#include "joueur.hpp"

int main() {

    Joueur Mario(20, 5);

    Mario.deplacerBas(8);
    Mario.deplacerDroite(2);
    Mario.deplacerHaut(3);
    Mario.deplacerGauche(4);
    Mario.afficherPosition();

    return 0;
}
