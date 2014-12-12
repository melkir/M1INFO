#ifndef __COMPAREPOINT2D_H_
#define __COMPAREPOINT2D_H_

#include "point2D.h"

/** Foncteur qui compare deux points 2D */
class _comparePoint2D {
public:
	bool operator()(point2D a, point2D b) {
		return a < b; // operator< de point2D
	}
};

#endif //__COMPAREPOINT2D_H_
