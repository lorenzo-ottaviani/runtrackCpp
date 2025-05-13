/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 13/05/2025 10h27
* But du programme :
*    Affiche Hello world dans le terminal n fois tant que n est différent de O.
* Entrée : ∅
* Sortie : Affichage d'Hello World n fois.
*/

#include <iostream>

int main() {
    int n = 10;
    while (n > 0) {
        std::cout << "Hello World" << std::endl;
        n--;
    }

    return 0;
}
