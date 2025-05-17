/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 17/05/2025 13h48
* But du programme :
*    Calculer la longueur d'une chaîne de caractères.
* Entrée : ∅
* Sortie : Affiche la longueur de la chaîne de caractères dans le terminal.
*/

#include <iostream>
#include <string>

int main() {
    std::string phrase = "Vive la plateforme !";

    int taille = phrase.length();
    std::cout << "La taille est " << taille << std::endl;

    return 0;
}
