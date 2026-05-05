#include <iostream>
using namespace std;

void calculquorum() {
    int I, V;
    float Q , q ;
    cout << "Entrez le nombre d'inscrits : ";
    cin >> I;
    cout << "Entrez le nombre de votants : ";
    cin >> V;
    cout << "Le quorum est de " << Q  << endl;
    cin >> Q;
    float P=(100.0*V)/I;
    float M=(V/2.0)+1;
    q = (100.0*V)/I;

    if (Q > q) {
        cout << "Le quorum n'est pas atteint." << endl;
    } else {
        cout << "Le quorum est atteint." << endl;
        cout << "Le pourcentage de votes est de " << P << "%." << endl;
        cout << "Le nombre de votes nécessaires pour gagner est de " << M << "." << endl;   
    }
}

int main() {
    calculquorum();
    return 0;
}