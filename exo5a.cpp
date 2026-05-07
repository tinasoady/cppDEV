#include <iostream>
#include <unistd.h>   // Pour usleep
#include <termios.h>  // Pour la gestion du terminal
#include <fcntl.h> // Pour fcntl
//#include <conio.h>   // kbhit()
using namespace std;

// Fonction pour vérifier si une touche a été pressée
// Cette fonction est spécifique aux systèmes Unix/Linux
int kbhit() {
    struct termios oldt, newt;
    int ch;
    int oldf;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if (ch != EOF) {
        ungetc(ch, stdin);
        return 1;
    }

    return 0;
}


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