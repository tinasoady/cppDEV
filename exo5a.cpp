#include <iostream>
#include <conio.h>   // kbhit()
using namespace std;

int main() {
    int i = 1;

    while (kbhit() == 0) {
        cout << i << "^2 = " << i * i << endl;
        i++;

        // Temporisation ~500 ms via boucle for (decompteur)
        for (long j = 0; j < 1200000000L; j++);
    }

    return 0;
}