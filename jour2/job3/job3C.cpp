/*
* Auteur : Lorenzo OTTAVIANI.
* Date : 14/05/2025 22h47
* But du programme :
*    Calculer la somme de quatre nombres avec une boucle do while.
* Entrées : Les nombres.
* Sortie : Affiche la somme.
*/

#include <iostream>
using namespace std ;

int main() {
    int i, n, som ;
    som = 0 ;
    i = 0;

    do  {
        cout << "Donnez un entier : " ;
        cin >> n ;
        som += n ;
        i++ ;
    } while (i < 4) ;

    cout << "Somme : " << som << endl ;

    return 0 ;
}
