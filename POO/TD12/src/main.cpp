#include <iostream>
#include "../header/polygon2D.h"
#include "../header/chrono.h"

using namespace std;

/** Generation d'un nombre en min et max */
int random(int min, int max) {
    return min + (rand() % (max - min + 1));
}

/** Creation d'un polygone contenant nb point2D genere aleatoirement */
const polygon2D generate(int nb) {
    polygon2D poly2D;
    srand((unsigned int) time(NULL));
    // Ajout de nb point2D aleatoire au polygone
    for (int i = 0; i < nb; ++i)
        poly2D.push(point2D(random(-100, 100), random(-100, 100)));
    return poly2D;
}

int main() {
    // Creation d'un polygon2D et remplissage avec 5 point2D aleatoires
    polygon2D poly2D = generate(10);
    cout << "Calcul du barycentre avec foncteur:  " << poly2D.barycentre()
            << "\nCalcul du barycentre avec iterateur: " << poly2D.barycentre_1()
            << endl;

    cout << "Application de la fonction de tri"
            << "\nAvant: " << poly2D
            << "\nApres: ";
    polygon2D::tri_std(poly2D);
//  polygon2D::triSelection(poly2D);
    cout << poly2D << endl;

    cout << "\nGeneration de 10000 points aleatoires" << endl;
    poly2D = generate(10000);
    chrono ch;
    cout << "triSelection()" << endl;
    ch.debut();
    polygon2D::triSelection(poly2D);
    ch.fin();
    cout << "Temps: " << ch.temps() << " secondes" << endl;

    cout << "Generation de 10000 autres points aleatoires" << endl;
    poly2D = generate(10000);
    cout << "tri_std()" << endl;
    ch.debut();
    polygon2D::tri_std(poly2D);
    ch.fin();
    cout << "Temps: " << ch.temps() << " secondes" << endl;
    /* tri_std (std::sort) est bien plus rapide que ma fonction triSelection */

    return 0;
}
