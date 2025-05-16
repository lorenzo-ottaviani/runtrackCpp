/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 16/05/2025 15h12
* But du programme :
*    Vérifier si deux chaînes de caractères sont identiques.
* Entrée : ∅
* Sortie : Retourne une erreur si les deux chaînes sont différentes dans le terminal.
*/

#include <iostream>
#include <string>

bool identique(std::string phrase1, std::string phrase2) {
    if (phrase1.length() == phrase2.length()) {
        int i = 0;
        while (i < phrase1.length()) {
            if (phrase1[i] != phrase2[i]) {
                return false;
            } else {
                i++;
            }
        }

        return true;

    } else {
        return false;
    }
}

int main() {
    std::string phrase1;
    std::cout << "Entrez une première phrase : " << std::flush;
    std::cin >> phrase1;

    std::string phrase2;
    std::cout << "Entrez une seconde phrase : " << std::flush;;
    std::cin >> phrase2;


    if (identique(phrase1, phrase2)) {
        std::cout << "C'est bien, les deux phrases sont pareilles, identiques même !" << std::endl;
        return 0;
    } else {
        std::cout << "C'est n'importe quoi ce que te fait! Pas du tout pareil tout ça !" << std::endl;
        return 1;
    }
}
