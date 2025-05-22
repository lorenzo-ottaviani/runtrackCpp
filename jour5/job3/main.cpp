/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 22/05/2025 19h21
* But du programme :
*    Déplacer trois joueurs.
* Entrée : ∅
* Sortie : Affiche les mouvements des joueurs dans le terminal.
*/

#include "joueur.hpp"

int main() {

    Joueur Dorothy;
    Dorothy.afficherPosition();

    Joueur Fratac(100, 100, "Fratac");
    Fratac.afficherPosition();

    Joueur Mario(20, 5);

    Mario.deplacerBas(8);
    Mario.deplacerDroite(2);
    Mario.deplacerHaut(3);
    Mario.deplacerGauche(4);
    Mario.afficherPosition();

    return 0;
}
