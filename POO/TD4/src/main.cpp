#include <iostream>
#include "../header/Dauphin.h"

using namespace std;

void exec_exo1() {

    Dauphin flipper(23, 50, "Flipper", true, 12, 25);
    flipper.affiche();
    const Dauphin *petit_flipper = flipper.engendrer(true);
    petit_flipper->affiche();
    cout << "addr flipper: " << &flipper << endl;
    cout << "addr petit flipper: " << &petit_flipper << endl;
}

int main() {
    exec_exo1();
    return 0;
}
