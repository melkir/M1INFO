#include <iostream>
#include <cstdlib>
#include "../header/part1.h"

using namespace std;

/** Compte de 1 jusqu'à n */
void count_nb(int n) {
    int i = 1;
    cout << '[' << i;
    while (i < n) cout << ',' << ++i;
    cout << ']' << endl;
}

/** Calcul des carrés de n nombres */
void square(int n) {
    cout << '[' << 1;
    for (int i = 2; i < n + 1; ++i) cout << ',' << i * i;
    cout << ']' << endl;
}

/** Calcul de la puissance de n nombres */
void power(int n) {
    cout << '[' << 2;
    for (int i = 1, j = 2; i < n; ++i) {
        j += j;
        cout << ',' << j;
    }
    cout << ']' << endl;
}

/* Console input int compris entre borne inf et sup */
int range(int inf, int sup) {
    int x;
    do {
        cin >> x;
        if (x < inf || x > sup) cerr << "Bad argument" << endl;
    } while (x < inf || x > sup);

    return x;
}

/* Deviner un nombre choisi automatiquement par l'ordinateur */
void find_number() {
    cout << "Choisir un nombre entre 0 et 99 :" << endl;
    const int secret = range(0, 99);
    int guess = 50, min = 0, max = 100, i = 0;
    do {
        cout << guess;
        if (secret > guess) {
            cout << "+";
            min = guess;
            guess += (max - min) / 2;
        } else if (secret < guess) {
            cout << "-";
            max = guess;
            guess -= (max - min) / 2;
        }
        cout << endl;
        ++i;
    } while (secret != guess);

    cout << endl;
    cout << "Le nombre caché est " << guess << " trouvé en " << i << " coups !" << endl;

}

/* Demander à l'ordinateur de trouver un nombre choisi par l'utilisateur */
void find_number2(int inf, int sup) {
    srand((unsigned) time(0));
    const int res = rand() % (sup - inf) + inf;
    cout << "Entrer un nombre compris entre "
            << inf << " et " << sup << " :";
    int x;
    do {
        x = range(inf, sup);
        if (x < res) cout << '+';
        else if (x > res) cout << '-';
        cout << endl;
    } while (x != res);
    cout << "Félicitations vous avez trouvé le nombre caché !" << endl;
}