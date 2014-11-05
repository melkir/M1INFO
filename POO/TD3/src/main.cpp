#include <iostream>
#include "../header/Chien.h"

using namespace std;

void exec_exo1() {
    // FAUX
    Animal animal(12, "miaow");
    Chien chien(2, "aboiement", "rrrrh");
    /*
    animal = chien;
    animal.presenter();
    */
    /*
    // OK
    Animal *c;
    c = new Chien(4, "aboiement", "rrrh");
    c->presenter();
    delete c;
    */

    chien = animal;
    chien.presenter();


}

int main() {
    exec_exo1();
    return 0;
}