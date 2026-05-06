#include <iostream>
#include <iomanip>
using namespace std;

// Affiche le tableau par lignes de 5 elements
void affiche(int *tx, int taille) {
    for (int i = 0; i < taille; i++) {
        cout << setw(6) << tx[i];
        if ((i + 1) % 5 == 0)
            cout << endl;
    }
    cout << endl;
}

// Retourne le minimum du tableau
float min(float *tx, int taille) {
    float mini = tx[0];
    for (int i = 1; i < taille; i++) {
        if (tx[i] < mini)
            mini = tx[i];
    }
    return mini;
}

// Retourne le maximum du tableau
float max(float *tx, int taille) {
    float maxi = tx[0];
    for (int i = 1; i < taille; i++) {
        if (tx[i] > maxi)
            maxi = tx[i];
    }
    return maxi;
}

int main() {
    int tab1[20] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    int tab2[20] = {-19,18,-17,16,-15,14,-13,12,-11,10,-9,8,-7,6,-5,4,-3,2,-1,0};

    // Affichage tab1
    cout << "=== Tableau tab1 ===" << endl;
    affiche(tab1, 20);

    // Affichage tab2
    cout << "=== Tableau tab2 ===" << endl;
    affiche(tab2, 20);

    // Min et Max sur tab1 (converti en float)
    float ftab1[20], ftab2[20];
    for (int i = 0; i < 20; i++) {
        ftab1[i] = (float)tab1[i];
        ftab2[i] = (float)tab2[i];
    }

    cout << "tab1 -> Min = " << min(ftab1, 20) << "  |  Max = " << max(ftab1, 20) << endl;
    cout << "tab2 -> Min = " << min(ftab2, 20) << "  |  Max = " << max(ftab2, 20) << endl;

    return 0;
}