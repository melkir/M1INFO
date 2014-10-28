#include <iostream>
#include "../header/Vecteur3D.h"
#include "../header/Rectangle.h"
#include "../header/part1.h"

using namespace std;

namespace {
    void launch_part1() {
        count_nb(20);
        square(20);
        power(20);
        find_number();
        find_number2(0, 99);
    }

    void launch_rectangle() {
        Rectangle r(4, 2);
        r.affichage();
        r.affichageProprietes();
        Rectangle r2;
        r2.affichage();
        r2.affichageProprietes();
    }

    void launch_vecteur3D() {
        Vecteur3D v1;
        Vecteur3D v2(12.5, 3.8, 4.5);
        Vecteur3D v3(13.7, 5, 0);

        cout << "v1: ";
        v1.affichage();
        cout << "v2: ";
        v2.affichage();
        cout << "v3: ";
        v3.affichage();

        cout << "\nv1.v2: " << v1.prodScalaire(v2)
                << "\nv2.v1: " << v2.prodScalaire(v1)
                << "\nv2.v3: " << v2.prodScalaire(v3)
                << "\nv3.v2: " << v3.prodScalaire(v2)
                << '\n' << endl;

        cout << "v1+v2 : ";
        v1.somme(v2).affichage();
        cout << "v1+v3 : ";
        v1.somme(v3).affichage();
        cout << "v2+v3 : ";
        v2.somme(v3).affichage();
    }
}

int main() {
//    launch_part1();
//    launch_rectangle();
    launch_vecteur3D();

    return 0;
}
