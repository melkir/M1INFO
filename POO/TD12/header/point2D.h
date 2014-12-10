#ifndef __POINT2D_H_
#define __POINT2D_H_


class point2D {
public:
    point2D() : m_x(0), m_y(0) {
    }

    point2D(float x, float y) : m_x(x), m_y(y) {
    }

    float getY() const {
        return m_y;
    }

    float getX() const {
        return m_x;
    }

    /* Operateur optionnel dans le cas du TD */
    point2D &operator+=(const point2D &rhs) {
        m_x += rhs.m_x;
        m_y += rhs.m_y;
        return *this;
    }

    friend point2D operator+(point2D lhs, const point2D &rhs) {
        return lhs += rhs;
    }

    friend std::ostream &operator<<(std::ostream &os, const point2D &p) {
        return os << '(' << p.m_x << ',' << p.m_y << ')';
    }

private:
    float m_x, m_y;
};


#endif //__POINT2D_H_
