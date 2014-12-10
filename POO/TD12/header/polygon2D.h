#ifndef __POLYGON2D_H_
#define __POLYGON2D_H_

#include <vector>
#include <algorithm>
#include <iostream>
#include "../header/point2D.h"
#include "../header/averagePoints2D.h"

class polygon2D {
public:
    polygon2D() : m_vPoint2D(0) {
    }

    point2D barycentre();

    point2D barycentre_1();

    ~polygon2D() {
        // C++11 optionnal destructor to free memory
        m_vPoint2D.shrink_to_fit();
    }

    void pop() {
        m_vPoint2D.pop_back();
    }

    void push(point2D p) {
        m_vPoint2D.push_back(p);
    }

private:
    std::vector<point2D> m_vPoint2D;
};


#endif //__POLYGON2D_H_

point2D polygon2D::barycentre() {
    averagePoints2D avg = std::for_each(m_vPoint2D.begin(), m_vPoint2D.end(), averagePoints2D());
    return avg;
}

point2D polygon2D::barycentre_1() {
    // Declaration des variables
    int sum_x = 0, sum_y = 0, nbElem = (int) m_vPoint2D.size();
    // Calcul de la somme des points
    for (std::vector<point2D>::iterator it = m_vPoint2D.begin(); it != m_vPoint2D.end(); ++it) {
        sum_x += (*it).getX();
        sum_y += (*it).getY();
    }
    // Calcul du barycentre qui correspond a la moyenne des points
    return point2D(sum_x / nbElem, sum_y / nbElem);
}
