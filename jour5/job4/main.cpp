/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 23/05/2025 8h00
* But du programme :
*    Déplacer trois joueurs, utilise le pointeur this.
* Entrée : ∅
* Sortie : Affiche les mouvements des joueurs dans le terminal.
*/

#include "joueur.hpp"

int main() {

    Joueur Dorothy;
    Dorothy.afficherPosition();
    Dorothy.set_nom("Dorothy");
    Dorothy.afficherPosition();

    Joueur Fratac(100, 100, "Fratac");
    Fratac.afficherPosition();
    Fratac.set_x(-60);
    Fratac.set_y(80);
    Fratac.afficherPosition();

    Joueur Mario(20, 5);

    Mario.deplacerBas(8);
    Mario.deplacerDroite(2);
    Mario.deplacerHaut(3);
    Mario.deplacerGauche(4);
    Mario.afficherPosition();

    return 0;
}
