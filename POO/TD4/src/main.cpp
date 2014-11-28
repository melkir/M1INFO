#include <iostream>
#include "../header/Dauphin.h"

using namespace std;

void exec_exo1() {

    Dauphin flipper(23, 50, "Flipper", true, 12, 25);
    flipper.affiche();
    Dauphin *petit_flipper = flipper.engendrer(true);
    petit_flipper->affiche();
}

int main() {
    exec_exo1();
    return 0;
}
