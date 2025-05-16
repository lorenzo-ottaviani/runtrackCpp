/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 16/05/2025 14h01
* But du programme :
*    Supprimer toutes les voyelles d'une chaîne de caractères.
* Entrée : ∅
* Sortie : Affiche la chaîne de caractères convertie dans le terminal.
*/

#include <iostream>
#include <string>

bool voyelles(char lettre) {
    if (lettre == 'a' || lettre == 'e' || lettre == 'i' || lettre == 'o' || lettre == 'u' || lettre == 'y'
        || lettre == 'A' || lettre == 'E' || lettre == 'I' || lettre == 'O' || lettre == 'U' || lettre == 'Y') {
        return true;
    } else {
        return false;
    }
}

int main() {
    std::string phrase = "vive la plateforme !";

    int i=0;
    while (i<phrase.length()) {
        if (voyelles(phrase[i])) {
            // Supprime la voyelle en décalant tous les caractères suivants d'une position vers la gauche
            phrase.erase(i, 1);
        } else {
            i++;
        }
    }

    std::cout << phrase << std::endl;

    return 0;
}
