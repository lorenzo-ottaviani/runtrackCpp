/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 14/05/2025 14h46
* But du programme :
*    Indique la taille d'un élément selon le nombre entré par l'utilisateur.
* Entrée : Le nombre.
* Sortie : Affiche la taille de l'élément dans le terminal.
*/

#include <iostream>

int main() {
    int n;
    std::cin >> n;

    switch (n) {
        case 0: std::cout << "Nul\n";
        case 1:
        case 2: std::cout << "Petit\n";
                            break;
        case 3:
        case 4:
        case 5: std::cout << "Moyen\n";
        default: std::cout << "Grand\n";
    }

    return 0;
}
