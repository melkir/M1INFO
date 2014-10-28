#include <iostream>
#include "../header/Polygone.h"

using namespace std;

Polygone::Polygone() {
    cout << "Saisie des informations concernant le polygone" << endl;
    cout << "Combien de points dans le polygone : ";
    int nbPoints;
    cin >> nbPoints;
    cout << "++ Saisie des coordonnees des " << nbPoints << " points" << endl;
    int x, y = 0;
    for (int i = 0; i < nbPoints; ++i) {
        cout << "Point n°" << i << " : \n";
        cin >> x >> y;
        m_pilePoint.empile(Point(x, y));
    }
    affiche();
}


Polygone::Polygone(const Polygone &p) : m_pilePoint(PilePoint()) {
    for (int i = 0; i < m_pilePoint.getSize(); ++i)
        m_pilePoint.empile(p.m_pilePoint.get(i));
}

Polygone::~Polygone() {
}


Polygone &Polygone::operator=(const Polygone &p) {
    Polygone temp(p);
    swap(*this, temp);
    return *this;
}

Polygone::Polygone(PilePoint pilePoint) : m_pilePoint(pilePoint) {
}

float Polygone::perimetre() const {
    float res = 0.0;
    size_t const size = getNbPoints();
    for (int i = 0; i < size; ++i) {
        res += Point::distance(m_pilePoint.get(i), m_pilePoint.get(i + 1));
    }
    return res;
}

void Polygone::affiche() const {
    cout << "==== Information concernant le polygone ===="
            << "\nPolygone : ";
    m_pilePoint.affiche();
    cout << "Perimetre : " << perimetre() << endl;
}

const size_t Polygone::getNbPoints() const {
    return m_pilePoint.getSize();
}

void swap(Polygone &p1, Polygone &p2) {
    std::swap(p1.m_pilePoint, p2.m_pilePoint);
}
