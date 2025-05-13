/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 13/05/2025 18h51
* But du programme :
*    Vérifie si une année est bissextile.
* Entrée : ∅
* Sortie : Affiche si l'année est bissextile ou pas dans le terminal.
*/

#include <iostream>

const char* verifie_bissextile (int an) {
    if ((an % 4 == 0) && (an % 100 != 0 || an % 400 == 0)) {
        return "bissextile";
    } else {
        return "normal";
    }
}

int main() {
    int n;
    std::cout << "Choisi un an : " << std::flush;
    if (!(std::cin >> n)) {
        std::cerr << "Erreur : vous devez entrer un nombre entier !" << std::endl;
        return 1;
    }


    const char* resultat = verifie_bissextile(n);
    std::cout << "L'an " << n << " est : " << resultat << std::endl;


    return 0;
}
