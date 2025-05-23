/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 23/05/2025 8h39
* But du programme :
*    Afficher via un pointeur la valeur d'un nombre.
* Entrée : ∅
* Sortie : Affiche la valeur du nombre dans le terminal.
*/

#include <iostream>

int main() {
    int number = 2019;
    int* pointe_nombre = &number;

    std::cout << *pointe_nombre << std::endl;

    return 0;
}