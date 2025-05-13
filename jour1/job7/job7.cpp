/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 13/05/2025 15h31
* But du programme :
*    Vérifie si un nombre est pair ou impair.
* Entrée : ∅
* Sortie : Affiche si le nombre est pair ou impair dans le terminal.
*/

#include <iostream>

const char* verifie_parite (int nb) {
    if (nb % 2 == 0) {
        return "pair";
    } else {
        return "impair";
    }
}

int main() {
    int n;
    std::cout << "Choisi un nombre : " << std::flush;
    if (!(std::cin >> n)) {
        std::cerr << "Erreur : vous devez entrer un nombre entier !" << std::endl;
        return 1;
    }


    const char* resultat = verifie_parite(n);
    std::cout << "Le nombre " << n << " est : " << resultat << std::endl;


    return 0;
}

