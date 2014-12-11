#ifndef __POLYGON2D_H_
#define __POLYGON2D_H_

#include <vector>
#include <algorithm>
#include <iostream>
#include <bits/stream_iterator.h>
#include "../header/point2D.h"
#include "_barycentre.h"

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

    /** Ajout d'un point2D au polygon2D */
    void push(point2D p) {
        m_vPoint2D.push_back(p);
    }

    /* Retrait du dernier point2D ajouté au polygon2D */
    void pop() {
        m_vPoint2D.pop_back();
    }

    unsigned long getSize();

    /** Stream extraction */
    friend std::ostream &operator<<(std::ostream &os, const polygon2D &poly) {
//        for (auto &point : poly.m_vPoint2D) os << point << ' '; // C++ 11
        std::copy(poly.m_vPoint2D.begin(), poly.m_vPoint2D.end(), std::ostream_iterator<point2D>(os, " ")); // STL
        return os;
    }

    /** Old C++ tri selection */
    static void triSelection(int t[], int const n) {
        int i, min, j;
        for (i = 0; i < n - 1; ++i) {
            min = i;
            for (j = i + 1; j < n; ++j)
                if (t[j] < t[min]) min = j;
            if (min != i) std::swap(t[i], t[min]);
        }
    }

    /** C++11 tri selection */
    template<typename T>
    void triSelection(T &tab) {
        typename T::iterator min, jt;
        for (typename T::iterator it = tab.begin(); it < tab.end() - 1; ++it) {
            min = it;
            for (jt = it + 1; jt < tab.end(); ++jt)
                if (*jt < *min) min = jt;
            if (min != it) std::swap(*it, *min);
        }
    }

private:
    /** Vecteur de point2D */
    std::vector<point2D> m_vPoint2D;
};


#endif //__POLYGON2D_H_

point2D polygon2D::barycentre() {
    // for_each avec foncteur _barycentre()
    return std::for_each(m_vPoint2D.begin(), m_vPoint2D.end(), _barycentre());
}

point2D polygon2D::barycentre_1() {
    // Declaration et initialisation des variables
    int sum_x = 0, sum_y = 0, nbElem = (int) m_vPoint2D.size();
    // Calcul de la somme des points
    for (std::vector<point2D>::iterator it = m_vPoint2D.begin(); it != m_vPoint2D.end(); ++it) {
        sum_x += (*it).getX();
        sum_y += (*it).getY();
    }
    // Barycentre : moyenne des points cumulés
    return point2D(sum_x / nbElem, sum_y / nbElem);
}

unsigned long polygon2D::getSize() {
    return m_vPoint2D.size();
}
