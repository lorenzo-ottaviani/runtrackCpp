/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 23/05/2025 8h39
* But du programme :
*    Permuter les valeurs de deux nombres.
* Entrée : ∅
* Sortie : Affiche les valeur initiales des nombres puis celles après permutation dans le terminal.
*/

#include <iostream>
void permuter(int* nb1, int* nb2) {
    int temp = *nb1;
    *nb1 = *nb2;
    *nb2 = temp;
}


int main() {
    int light_number = 8;
    int dark_number = 666;

    std::cout << "Le gentil nombre qui représente l'infini est " << light_number <<
        ", tandis que le méchant nombre maudit est " << dark_number << " .\n" << std::endl;

    permuter(&light_number, &dark_number);

    std::cout << "Au non ! Que c'est t-il passé ? Après une permutation diabolique le gentil nombre est devenu " <<
        light_number << " et le méchant, lui maintenant c'est " << dark_number << ", ça va pas du tout !" << std::endl;

    return 0;
}
