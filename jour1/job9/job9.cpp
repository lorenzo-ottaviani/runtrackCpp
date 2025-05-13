/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 13/05/2025 23h03
* But du programme :
*    Détermine parmi trois nombres lequel est le plus grand.
* Entrées : Les trois nombres.
* Sortie : Affiche le nombre le plus grand dans le terminal.
*/

#include <iostream>

int maximum (int nb1, int nb2, int nb3) {
    int max = 0;

    if (nb1 > nb2) {
        if (nb1 > nb3) {
            max = nb1;
        }
        else {
            max = nb3;
        }
    }
    else {
        if (nb2 > nb3) {
            max = nb2;
        }
        else {
            max = nb3;
        }
    }

    return max;
}

int main() {
    int a;
    std::cout << "Choisi un premier nombre : " << std::flush;
    if (!(std::cin >> a)) {
        std::cerr << "Erreur : vous devez entrer un nombre entier !" << std::endl;
        return 1;
    }

    int b;
    std::cout << "Choisi un second nombre : " << std::flush;
    if (!(std::cin >> b)) {
        std::cerr << "Erreur : vous devez entrer un nombre entier !" << std::endl;
        return 1;
    }

    int c;
    std::cout << "Choisi un troisieme nombre : " << std::flush;
    if (!(std::cin >> c)) {
        std::cerr << "Erreur : vous devez entrer un nombre entier !" << std::endl;
        return 1;
    }

    int resultat = maximum(a, b, c);
    std::cout << "Le nombre le plus grand est : " << resultat << std::endl;

    return 0;
}
