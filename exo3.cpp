#include <iostream>
using namespace std;

int main() {
    int I, V, Q;
    float P, M;

    cout << "Nombre d'inscrits (I) : ";
    cin >> I;
    cout << "Quorum (Q) : ";
    cin >> Q;
    cout << "Nombre de votants (V) : ";
    cin >> V;

    if (V >= Q) {
        P = (100.0 * V) / I;
        M = V / 2.0 + 1;
        cout << "Quorum atteint !" << endl;
        cout << "Pourcentage de votants P = " << P << "%" << endl;
        cout << "Nombre de voix pour la majorite M = " << M << endl;
    } else {
        cout << "AVERTISSEMENT : Le quorum n'est pas atteint. Vote invalide." << endl;
    }

    return 0;
}