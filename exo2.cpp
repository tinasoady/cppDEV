#include <iostream>
using namespace std;



void somme(int a, int b, int c) {
    int s = a + b + c;
    cout << "leurs sommes : " << s << endl;
}

void moyenne(int a, int b, int c) {
    float m = (a + b + c) / 3.0;
    cout << "leurs moyennes : " << m << endl;
}

void diff(int a, int b, int c) {
    int d = a - b - c;
    cout << "leurs differences : " << d << endl;
}

int main() {
    int a, b,c;
    cout << "Entrer trois nombres reels: "<< endl;
    cin >> a >> b >> c;

    cout<<"quelle operation voulez vous faire ? "<<endl;
    cout<<"1-somme "<<endl;
    cout<<"2-moyenne "<<endl;
    cout<<"3-difference "<<endl;
    cout<<"votre choix : ";
    int choix;
    cin >> choix;

    switch (choix)
    {
    case 1:
        somme(a, b, c);
        break;
    case 2:
        moyenne(a, b, c);
        break;
    case 3:
        diff(a, b, c);
        break;
    default:
        cout << "Choix invalide." << endl;
        break;
    }

    return 0;
}
