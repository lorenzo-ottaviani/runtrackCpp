/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 15/05/2025 18h37
* But du programme :
*    Convertir en majuscules une chaîne de caractères en minuscules.
* Entrée : ∅
* Sortie : Affiche la chaîne de caractères convertie dans le terminal.
*/

#include <iostream>
#include <cctype>
#include <string>

int main() {
    std::string phrase = "vive la plateforme !";

    // Parcours de la chaîne et conversion de chaque caractère en majuscule si c'est une lettre minuscule
    for (char &ch : phrase) {
        ch = std::toupper(ch);
    }

    std::cout << phrase << std::endl;

    return 0;
}
