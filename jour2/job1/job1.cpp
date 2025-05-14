/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 14/05/2025 13h46
* But du programme :
*    Demande en boucle à l'utilisateur d'entrer un nombre supérieur à 0 tant que ce n'est pas correct.
* Entrée : Le nombre.
* Sortie : ∅
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    do {
        cout << "Donnez un nombre > 0 : ";
        cin >> n;
    } while (n <= 0);

    return 0;
}
