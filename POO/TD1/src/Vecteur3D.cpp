#include <cmath>
#include <iostream>
#include "../header/Vecteur3D.h"

using namespace std;

Vecteur3D::Vecteur3D() : m_x(0.0), m_y(0.0), m_z(0.0) {

}

Vecteur3D::Vecteur3D(double x, double y, double z) {
    m_x = x;
    m_y = y;
    m_z = z;
}

void Vecteur3D::affichage() const {
    cout << "vecteur de coordonnées : " << '(' << m_x << ", " << m_y << ", " << m_z << ")" << endl;
}

Vecteur3D Vecteur3D::somme(Vecteur3D const &second) {
    return *this + second;
}

double Vecteur3D::prodScalaire(Vecteur3D const &second) {
    return 0.5 * (pow(norme(*this + second), 2) - pow(norme(*this), 2) - pow(norme(second), 2));
}

double Vecteur3D::norme(Vecteur3D v) const {
    return sqrt(pow(v.m_x, 2) + pow(v.m_y, 2) + pow(v.m_z, 2));
}
