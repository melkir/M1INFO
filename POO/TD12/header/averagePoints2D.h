#ifndef __BARYCENTRE_H__
#define __BARYCENTRE_H__


#include "point2D.h"

class averagePoints2D {
public:
    averagePoints2D() : num(0), sum_x(0), sum_y(0) {
    }

    void operator()(const point2D &p) {
        num++;
        sum_x += p.getX();
        sum_y += p.getY();
    }

    operator point2D() const {
        return point2D(sum_x / num, sum_y / num);
    }

private:
    int num;
    int sum_x, sum_y;
};


#endif //__BARYCENTRE_H__
