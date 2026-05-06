#include <iostream>
using namespace std;

int main() {
    char tab[10];
    int compteur = 0;

    cout << "Saisir 10 caracteres :" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Caractere [" << i << "] : ";
        cin >> tab[i];
    }

    // Lecture et comptage des 'e'
    for (int i = 0; i < 10; i++) {
        if (tab[i] == 'e') {
            compteur++;
        }
    }

    cout << "Nombre de lettres 'e' : " << compteur << endl;

    return 0;
}