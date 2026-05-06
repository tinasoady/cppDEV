#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Entrez un entier n : ";
    cin >> n;

    // --- Avec do...while ---
    unsigned long long fact1 = 1;
    int i = 1;
    do {
        fact1 *= i;
        i++;
    } while (i <= n);
    cout << "do...while : " << n << "! = " << fact1 << endl;

    // --- Avec while ---
    unsigned long long fact2 = 1;
    i = 1;
    while (i <= n) {
        fact2 *= i;
        i++;
    }
    cout << "while      : " << n << "! = " << fact2 << endl;

    // --- Avec for ---
    unsigned long long fact3 = 1;
    for (int j = 1; j <= n; j++) {
        fact3 *= j;
    }
    cout << "for        : " << n << "! = " << fact3 << endl;

    /*
     * Valeurs maximales de n :
     * - int          (32 bits) : n! tient jusqu'a n = 12  (12! = 479001600)
     * - unsigned int (32 bits) : n! tient jusqu'a n = 12  (meme limite pratique)
     */

    return 0;
}