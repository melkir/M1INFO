#ifndef __POINT2D_H_
#define __POINT2D_H_


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

    inline bool operator<(const point2D &lhs, const point2D &rhs) {
        if (lhs.m_x < rhs.m_x) return true;
        else if (lhs.m_x == rhs.m_x) return lhs.m_y < rhs.m_y;
        else return false;
    }

    /* Operateur optionnel dans le cadre du TD */
    point2D &operator+=(const point2D &rhs) {
        m_x += rhs.m_x;
        m_y += rhs.m_y;
        return *this;
    }

    friend point2D operator+(point2D lhs, const point2D &rhs) {
        return lhs += rhs;
    }

    /** Stream extraction */
    friend std::ostream &operator<<(std::ostream &os, const point2D &p) {
        return os << '(' << p.m_x << ',' << p.m_y << ')';
    }

protected:
    /** Le point est caractérisé par son abscisse et son ordonnée */
    int m_x, m_y;
};


#endif //__POINT2D_H_
