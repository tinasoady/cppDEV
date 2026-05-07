#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int tab[20] = {4, -2, -23, 4, 34,
                   -67, 8, 9, -10, 11,
                   4, 12, -53, 19, 11,
                   -60, 24, 12, 89, 19};

    for (int i = 0; i < 20; i++) {
        cout << setw(6) << tab[i]; // Affiche chaque élément du tableau avec une largeur de champ de 6
        if ((i + 1) % 5 == 0) {
            cout << endl; // Saut de ligne après chaque 5 éléments
        }
    }

    return 0;
}