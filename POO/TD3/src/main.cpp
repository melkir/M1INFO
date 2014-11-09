#include <iostream>
#include "../header/Chien.h"
#include "../header/Commercial.h"
#include "../header/Technicien.h"
#include "../header/Manutentionnaire.h"

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

void exec_exo2() {
    Commercial commercial;
    commercial.setChiffreAffaire(100.0);
    commercial.affiche();
    cout << "Salaire : " << commercial.calculer_salaire() << " euros" << endl;
//    Technicien technicienn;
//    Manutentionnaire manutentionnaire;
}

int main() {
//    exec_exo1();
    exec_exo2();
    return 0;
}