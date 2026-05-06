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
    
    calculElection(I, V);
    
    return 0;
}