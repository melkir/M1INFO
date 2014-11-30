#include <iostream>
#include "../header/Dauphin.h"
#include "../header/Queue.h"

using namespace std;

void exec_exo1() {
    Dauphin flipper(23, 50, "Flipper", true, 12, 25);
    flipper.affiche();
    Dauphin *petit_flipper = flipper.engendrer(true);
    petit_flipper->affiche();
}

void exec_exo2() {
    cout << "///// File d'attente contenant des int /////" << endl;
    Queue<int> qint(20);
    for (int i = 1; i < 21; ++i)
        qint.push(i);
    qint.affiche();
    cout << "On retire successivement 2 éléments de la file" << endl;
    cout << "\n1er elt enlevé : " << qint.pop() << "\n" << endl;
    qint.affiche();
    cout << "\n2er elt enlevé : " << qint.pop() << "\n" << endl;
    qint.affiche();
    cout << "\n\n\n" << endl;

    cout << "///// File d'attente contenant des float /////" << endl;
    Queue<float> qfloat(20);
    for (float j = 101.5; j < 108.0; ++j)
        qfloat.push(j);
    qfloat.affiche();
    cout << "On retire successivement 2 éléments de la file" << endl;
    cout << "\n1er elt enlevé : " << qfloat.pop() << "\n" << endl;
    qfloat.affiche();
    cout << "\n2er elt enlevé : " << qfloat.pop() << "\n" << endl;
    qfloat.affiche();
    cout << "\n\n\n" << endl;

    cout << "///// File d'attente contenant des caractères /////" << endl;
    Queue<char> qchar(20);
    for (char car = 'a'; car < 'k'; ++car)
        qchar.push(car);
    qchar.affiche();
    cout << "On retire successivement 2 éléments de la file" << endl;
    cout << "\n1er elt enlevé : " << qchar.pop() << "\n" << endl;
    qchar.affiche();
    cout << "\n2er elt enlevé : " << qchar.pop() << "\n" << endl;
    qchar.affiche();
}

int main() {
//    exec_exo1();
    exec_exo2();
    return 0;
}
