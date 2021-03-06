#ifndef __POINT2D_H_
#define __POINT2D_H_

#include <iostream>

/** Point en 2 dimensions */
class point2D {
public:
    /** Constructeur de point2D */
    point2D() : m_x(0), m_y(0) {
    }

    /** Constructeur avec comme parametre l'abscisse et l'ordonnee du point */
    point2D(int x, int y) : m_x(x), m_y(y) {
    }

    /** Renvoi l'ordonnee du point */
    int getY() const {
        return m_y;
    }

    /** Renvoi l'abscisse du point */
    int getX() const {
        return m_x;
    }

    /** Operateur de comparaison de point2D */
    inline bool operator<(const point2D &rhs) const {
        /*
         if (m_x < rhs.m_x) return true;
         else if (m_x == rhs.m_x) return m_y < rhs.m_y;
         else return false;
        */
        return m_x < rhs.m_x || (m_x == rhs.m_x && m_y < rhs.m_y);
    }

    /** Operateur d'addition de point2D */
    point2D &operator+=(const point2D &rhs) {
        m_x += rhs.m_x;
        m_y += rhs.m_y;
        return *this;
    }

    /** Operateur d'addition de point2D */
    point2D operator+(const point2D &p) {
        return *this += p;
    }

    /** Stream extraction point2D */
    friend std::ostream &operator<<(std::ostream &os, const point2D &p) {
        return os << '(' << p.getX() << ',' << p.getY() << ')';
    }

private:
    /** Abscisse du point2D */
    int m_x,
    /** Ordonnee du point2D */
            m_y;
};

#endif //__POINT2D_H_
