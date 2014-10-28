#ifndef VECTEUR3D_H
#define VECTEUR3D_H

class Vecteur3D {

public:
    Vecteur3D();

    Vecteur3D(double x, double y, double z);

    Vecteur3D operator+(Vecteur3D const &second);

    void affichage() const;

    double prodScalaire(Vecteur3D const &second);

    Vecteur3D somme(Vecteur3D const &second);

private:
    double m_x, m_y, m_z;

    double norme(Vecteur3D v) const;
};

inline Vecteur3D Vecteur3D::operator+(Vecteur3D const &second) {
    Vecteur3D res;
    res.m_x = m_x + second.m_x;
    res.m_y = m_y + second.m_y;
    res.m_z = m_z + second.m_z;
    return res;
}

#endif
