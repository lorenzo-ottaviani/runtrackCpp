/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 13/05/2025 11h22
* But du programme :
*    Créer la table de multiplication d'un entier n.
* Entrée : Entier n.
* Sortie : Affichage de la table de l'entier n dans le terminal.
*/

#include <iostream>

int main() {
    int n;
    std::cout << "Choisi le nombre dont tu souhaites connaitre la table de multiplication : " << std::flush;
    std::cin >> n;

    std::cout << "La table de multiplication du " << n << " est :" << std::endl;
    for (int i = 1; i <= 10; i++) {
        std::cout << n << " x " << i << " = " << i * n << std::endl;
    }

    return 0;
}
