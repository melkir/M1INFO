#include "PilePoint.h"

#ifndef POLYGONE_H
#define POLYGONE_H

class Polygone {
public:
    /* --- Forme canonique de Coplien --- */

    Polygone(); // Constructeur par defaut

    Polygone(const Polygone &); // Constructeur par recopie

    ~Polygone(); // Destructeur

    Polygone &operator=(const Polygone &); // Operateur d'affectation
    /* --- END --- */

    Polygone(PilePoint);

    float perimetre() const;

    void affiche() const;

    const size_t getNbPoints() const;

    friend void swap(Polygone &p1, Polygone &p2);

private:
    PilePoint m_pilePoint;
};

#endif
