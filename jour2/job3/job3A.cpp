/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 14/05/2025 22h14
* But du programme :
*    Calculer la somme de quatre nombres avec une boucle for.
* Entrées : Les nombres.
* Sortie : Affiche la somme.
*/

#include <iostream>
using namespace std ;

int main() {
    int i, n, som ;
    som = 0 ;

    for ( i = 0 ; i < 4 ; i++ ) {
        cout << "Donnez un entier : " ;
        cin >> n ;
        som += n ;
    }

    cout << "Somme : " << som << endl ;

    return 0 ;
}
