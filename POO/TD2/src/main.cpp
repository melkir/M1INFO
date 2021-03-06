#include <iostream>
#include "../header/Peluche.h"
#include "../header/PileEntier.h"
#include "../header/Point.h"
#include "../header/Polygone.h"

using namespace std;

namespace {
    void launch_peluche() {
        Peluche peluche = Peluche("Bobo", "ours");
        cout << "Une peluche est fabriquée" << endl;
        peluche.setPrix(29.9);
        peluche.afficheEtiquette();
//        peluche.augmentation(20);
//        peluche.rabais(50);
        Peluche copiePeluche = peluche.clone();
        cout << "\nUne copie de peluche à été créée" << endl;
        copiePeluche.afficheEtiquette();

        cout << "\nRéférence de peluche : " << &peluche
                << "\nRéférence de copiePeluche : " << &copiePeluche
                << '\n' << endl;
    }

    void launch_pileEntier() {
        PileEntier a(3); // Une pile de 3 entiers
        a < 3;
        a < 12; // a.empile(3); a.empile(12);
        cout << "*** Affichage de la pile a : \n";
        a.affiche();
//        PileEntier b(a);
        PileEntier b;
        b = a;
        cout << "*** Affichage de la pile b : \n";
        b.affiche();
        b.empile(45);
        int nb;
        a > nb; // nb = a.depile();
        cout << "Element dépilé de a : " << nb << endl;
        cout << "*** Affichage de la pile a : \n";
        a.affiche();
        cout << "*** Affichage de la pile b : \n";
        b.affiche();
    }

    void launch_pilePoint() {
        PilePoint a(3);
        a.empile(Point(3, 3));
        a.empile(Point(12, 3));
        a.affiche();
        PilePoint b(a);
        b.affiche();
        Point nb;
        a > nb;
        nb.affiche();
        a.affiche();
        b.affiche();
    }

    void launch_point() {
        Point x(1, 5);
        Point y(2, 4);
        x.affiche();
        y.affiche();
        cout << "Distance entre x et y : " << x.distance(y) << endl;
        cout << "Distance entre x et y : " << Point::distance(x, y) << endl;
    }

    void launch_polygone() {
        Polygone p;
        Polygone p1;
    }
}

int main() {
//    launch_peluche();
//    launch_pileEntier();
//    launch_point();
//    launch_pilePoint();
    launch_polygone();
    return 0;
}
