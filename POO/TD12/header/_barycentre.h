#ifndef __BARYCENTRE_H__
#define __BARYCENTRE_H__


#include "point2D.h"

/** Foncteur qui calcul le barycentre a partir d'une liste de points */
class _barycentre {
public:
    void operator()(const point2D &p) {
        ++nbElem;
        sum_x += p.getX();
        sum_y += p.getY();
    }

    operator point2D() const {
        return point2D(sum_x / nbElem, sum_y / nbElem);
    }

private:
    int nbElem = 0, sum_x = 0, sum_y = 0;
};


#endif //__BARYCENTRE_H__
