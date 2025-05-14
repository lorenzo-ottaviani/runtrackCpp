/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 14/05/2025 23h41
* But du programme :
*    Créer une calculatrice basique effectuant les quatre opérations.
* Entrées : Les nombres.
* Sortie : Le résultat de l'opération choisie.
*/

#include <iostream>
#include <limits>

int verifie_entree_choix() {
    int nb;

    while (true) {
        std::cin >> nb;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Veuillez choisir un nombre entier !" << std::endl;
        } else {
            return nb;
        }
    }

}

double verifie_entree_double() {
    double nb;

    while (true) {
        std::cin >> nb;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Veuillez choisir un nombre !" << std::endl;
        } else {
            return nb;
        }
    }

}

int main() {
    std::cout << "Bienvenue dans ta calculatrice C++ !\n" << std::endl;
    std::cout << "Choisis un premier nombre : " << std::flush;
    double nb1 = verifie_entree_double();
    std::cout << "Choisis un second nombre : " << std::flush;
    double nb2 = verifie_entree_double();

    std::cout << "Choisis 0 pour effectuer une addition" << std::endl;
    std::cout << "Choisis 1 pour effectuer une soustraction" << std::endl;
    std::cout << "Choisis 2 pour effectuer une multiplication" << std::endl;
    std::cout << "Choisis 3 pour effectuer une division" << std::endl;

    std::cout << "Entrez votre choix : " << std::flush;
    int choix = verifie_entree_choix();
    double res;

    switch (choix) {
        case 0:
            std::cout << "Addition\n";
            res = nb1 + nb2;
            std::cout << "Le résultat est :" << res << std::endl;
            break;

        case 1:
            std::cout << "Soustraction\n";
            res = nb1 - nb2;
            std::cout << "Le résultat est :" << res << std::endl;
            break;

        case 2:
            std::cout << "Multiplication\n";
            res = nb1 * nb2;
            std::cout << "Le résultat est :" << res << std::endl;
            break;

        case 3:
            std::cout << "Division\n";
            if (nb2 == 0) {
                std::cout << "Erreur : division par zéro !" << std::endl;
                return 1;
            }
            res = nb1 / nb2;
            std::cout << "Le résultat est :" << res << std::endl;
            break;

        default:
            std::cout << "Entrée invalide\n";
            return 1;
    }

    return 0 ;
}
