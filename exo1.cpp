#include <iostream>
using namespace std;

void calculElection(int I, int V) {
    float P=100.0*V/I;
    float M=(V/2.0)+1;
    cout << "Le pourcentage de votes est de " << P << "%." << endl;
    cout << "Le nombre de votes nécessaires pour gagner est de " << M << "." << endl;
}

int main() {
    int I, V;
    cout << "Entrez le nombre d'inscrits : ";
    cin >> I;
    cout << "Entrez le nombre de votes exprimés : ";
    cin >> V;
    
    if (I <= 0) {
        cout << "Le nombre d'inscrits doit être supérieur à zéro." << endl;
        return 1;
    }
    if (V < 0 || V > I) {
        cout << "Le nombre de votes exprimés doit être compris entre 0 et le nombre d'inscrits." << endl;
        return 1;
    }

    calculElection(I, V);
    
    return 0;
}