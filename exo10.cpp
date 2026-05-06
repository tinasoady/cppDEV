#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

// Fonction carre
int carre(int x) {
    return x * x;
}

// Fonction cube
double cube(double x) {
    return x * x * x;
}

// Fonction racine carree
double racinecarre(double x) {
    return sqrt(x);
}

// Fonction racine cubique
double racinecubique(double x) {
    return cbrt(x);
}

// Fonction logarithme neperien
double logarithmeneper(double x) {
    return log(x);
}

// Fonction exponentielle
double exponentielle(double x) {
    return exp(x);
}

int main() {
    double n;
    int choix;

    cout << "======= MENU =======" << endl;
    cout << "1. Carre" << endl;
    cout << "2. Cube" << endl;
    cout << "3. Racine carree" << endl;
    cout << "4. Racine cubique" << endl;
    cout << "5. Logarithme neperien" << endl;
    cout << "6. Exponentielle" << endl;
    cout << "Votre choix : ";
    cin >> choix;

    cout << "Entrer un nombre : ";
    cin >> n;

    switch (choix) {
        case 1:
            cout << "Carre de " << n << " = " << carre((int)n) << endl;
            break;
        case 2:
            cout << "Cube de " << n << " = " << cube(n) << endl;
            break;
        case 3:
            if (n >= 0)
                cout << "Racine carree de " << n << " = " << racinecarre(n) << endl;
            else
                cout << "Erreur : racine carree d'un nombre negatif impossible." << endl;
            break;
        case 4:
            cout << "Racine cubique de " << n << " = " << racinecubique(n) << endl;
            break;
        case 5:
            if (n > 0)
                cout << "Logarithme neperien de " << n << " = " << logarithmeneper(n) << endl;
            else
                cout << "Erreur : logarithme d'un nombre <= 0 impossible." << endl;
            break;
        case 6:
            cout << "Exponentielle de " << n << " = " << exponentielle(n) << endl;
            break;
        default:
            cout << "Choix invalide." << endl;
    }

    cout << "\nPour sortir, frapper une touche : ";
    getch();
    return 0;
}