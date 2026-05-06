#include <iostream>
#include <cmath>
using namespace std;

// Saisie par reference (obligatoire car modifie les valeurs)
void saisie(float &A, float &B, float &C) {
    cout << "Entrez a : "; cin >> A;
    cout << "Entrez b : "; cin >> B;
    cout << "Entrez c : "; cin >> C;
}

// Calcul et affichage des racines
void calcul(float A, float B, float C) {
    if (A == 0) {
        cout << "Ce n'est pas une equation du second degre." << endl;
        return;
    }

    float delta = B * B - 4 * A * C;

    cout << "Delta = " << delta << endl;

    if (delta > 0) {
        float x1 = (-B + sqrt(delta)) / (2 * A);
        float x2 = (-B - sqrt(delta)) / (2 * A);
        cout << "Deux racines reelles distinctes :" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (delta == 0) {
        float x0 = -B / (2 * A);
        cout << "Une racine double :" << endl;
        cout << "x0 = " << x0 << endl;
    }
    else {
        float partieReelle    = -B / (2 * A);
        float partieImaginaire = sqrt(-delta) / (2 * A);
        cout << "Pas de racine reelle. Racines complexes :" << endl;
        cout << "x1 = " << partieReelle << " + " << partieImaginaire << "i" << endl;
        cout << "x2 = " << partieReelle << " - " << partieImaginaire << "i" << endl;
    }
}

int main() {
    float a, b, c;

    saisie(a, b, c);
    calcul(a, b, c);

    return 0;
}