#ifndef __BARYCENTRE_H_
#define __BARYCENTRE_H_

#include "point2D.h"

/** Foncteur qui calcul le barycentre a partir d'une liste de points */
class _barycentre {
public:
    _barycentre() : nbElem(0), sum_x(0), sum_y(0) {
    }

    /** Calcul de la somme des points2D */
    void operator()(const point2D &p) {
        ++nbElem;
        sum_x += p.getX();
        sum_y += p.getY();
    }

    /** Renvoi un point2D qui correspond au barycentre */
    operator point2D() const {
        return point2D(sum_x / nbElem, sum_y / nbElem);
    }

private:
<<<<<<< HEAD
    /** Nombre d'elements, somme des abscisses, somme des ordonnees */
    int nbElem, sum_x, sum_y;
=======
	/** Nombre d'elements */
	int nbElem,
	/** Somme des abscisses */
	sum_x,
	/** Somme des ordonnees */
	sum_y;
>>>>>>> cfbcd316dc590ef80ca773be71e2cee50122419c
};

#endif //__BARYCENTRE_H_
