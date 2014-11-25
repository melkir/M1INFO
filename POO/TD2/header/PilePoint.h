#ifndef PILEPOINT_H
#define PILEPOINT_H

#include "../header/Point.h"

class PilePoint {
public:
    /* --- Forme canonique de Coplien --- */
    PilePoint();

    PilePoint(const PilePoint&other);

    PilePoint &operator=(const PilePoint&);

    ~PilePoint();

    /* --- END --- */

    PilePoint(PilePoint&&); // Optimisation C++11

    PilePoint(size_t);

    void empile(const Point&);

    Point depile();

    void operator<(Point&);

    void operator>(Point&);

    bool pleine();

    bool vide();

    void affiche() const;

    friend void swap(PilePoint& p1, PilePoint& p2);

    const size_t getSize() const;

    Point get(int i) const;

private:
    size_t m_capacity;
    size_t m_size;
    Point *m_storage;
};

#endif /* PILEPOINT_H */
