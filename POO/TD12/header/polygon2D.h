#ifndef __POLYGON2D_H_
#define __POLYGON2D_H_

#include <vector>
#include <algorithm>
#include <iostream>
#include <bits/stream_iterator.h>
#include "../header/point2D.h"
#include "_barycentre.h"
#include "_comparePoint2D.h"

class polygon2D {
public:
    /** Contructeur, initialise le vecteur de point2D */
    polygon2D() : m_vPoint2D(0) {
    }

    /** Destructeur optionnel : C++11 free memory */
    ~polygon2D() {
        m_vPoint2D.shrink_to_fit();
    }

    /** Calcul du barycentre avec foncteur */
    point2D barycentre();

    /** Calcul du barycentre avec iterateur */
    point2D barycentre_1();

    /** Tri selection avec for loop */
    static void triSelection(polygon2D &poly);

    /** Tri selection avec for loop et iterateur */
    static void triSelectionIterator(polygon2D &poly);

    /** Tri selection avec std::sort() */
    static void tri_std(polygon2D &poly);

    /** Ajout d'un point2D au polygon2D */
    void push(point2D p) {
        m_vPoint2D.push_back(p);
    }

    /* Retrait du dernier point2D ajouté au polygon2D */
    void pop() {
        m_vPoint2D.pop_back();
    }

    /** Stream extraction */
    friend std::ostream &operator<<(std::ostream &os, const polygon2D &poly) {
//        for (auto &point : poly.m_vPoint2D) os << point << ' '; // C++ 11
        std::copy(poly.m_vPoint2D.begin(), poly.m_vPoint2D.end(), std::ostream_iterator<point2D>(os, " ")); // STL
        return os;
    }

private:
    /** Vecteur de point2D */
    std::vector<point2D> m_vPoint2D;
};

#endif //__POLYGON2D_H_
