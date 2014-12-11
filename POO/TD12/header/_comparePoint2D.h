#ifndef __COMPAREPOINT2D_H_
#define __COMPAREPOINT2D_H_

#include "point2D.h"

/** Foncteur qui compare deux points 2D */
class _comparePoint2D {
public:
    bool operator()(point2D a, point2D b) {
        // Voir l'operateur < dans la classe point2D pour plus de detail
        return a < b;
    }
};

#endif //__COMPAREPOINT2D_H_
