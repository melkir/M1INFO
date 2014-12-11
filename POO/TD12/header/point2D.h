#ifndef __POINT2D_H_
#define __POINT2D_H_

#include <iostream>

class point2D {
public:
    point2D() : m_x(0), m_y(0) {
    }

    point2D(int x, int y) : m_x(x), m_y(y) {
    }

    int getY() const {
        return m_y;
    }

    int getX() const {
        return m_x;
    }

    /** Operateur de comparaison de point2D */
    inline bool operator<(const point2D &rhs) const {
    if (m_x < rhs.m_x) return true;
else if (m_x == rhs.m_x) return m_y < rhs.m_y;
        else return false;
    }

    /* Operateur optionnel dans le cadre du TD */
    point2D &operator+=(const point2D &rhs) {
        m_x += rhs.m_x;
        m_y += rhs.m_y;
        return *this;
    }

    /** Operateur d'addition de point2D */
    friend point2D operator+(point2D lhs, const point2D &rhs) {
        return lhs += rhs;
    }

    /** Stream extraction point2D */
    friend std::ostream &operator<<(std::ostream &os, const point2D &p) {
        return os << '(' << p.m_x << ',' << p.m_y << ')';
    }

    private:
    /** Le point est caractérisé par son abscisse et son ordonnée */
    int m_x, m_y;
};

#endif //__POINT2D_H_
