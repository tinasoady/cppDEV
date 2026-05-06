#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char chaine[100];
    int compteur = 0;

    cout << "Entrez une chaine de caracteres : ";
    cin.getline(chaine, 100);

    cout << "Caractere par caractere :" << endl;
    for (int i = 0; i < strlen(chaine); i++) {
        cout << chaine[i] << " ";
    }
    cout << endl;

    // Compter les 'e'
    for (int i = 0; i < strlen(chaine); i++) {
        if (chaine[i] == 'e') {
            compteur++;
        }
    }

    cout << "Nombre de lettres 'e' : " << compteur << endl;

    return 0;
}