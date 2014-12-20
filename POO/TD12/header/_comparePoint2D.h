#ifndef __COMPAREPOINT2D_H_
#define __COMPAREPOINT2D_H_

#include "point2D.h"

/** Foncteur qui compare deux points 2D */
class _comparePoint2D {
public:
<<<<<<< HEAD
    bool operator()(point2D a, point2D b) {
        return a < b; // operator< de point2D
    }
=======
	/** Compare si le point2D a est inferieur au point b */
	bool operator()(point2D a, point2D b) {
		return a < b; // operator< de point2D
	}
>>>>>>> cfbcd316dc590ef80ca773be71e2cee50122419c
};

#endif //__COMPAREPOINT2D_H_
