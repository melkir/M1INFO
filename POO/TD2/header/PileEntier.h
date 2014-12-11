#include <stddef.h>
#include <ostream>

#ifndef PILEENTIER_H
#define PILEENTIER_H

class PileEntier {
public:

    PileEntier();

    PileEntier(size_t);

    PileEntier(const PileEntier&); // Construteur par recopie

    PileEntier(PileEntier&&); // Optimisation C++11

    PileEntier &operator=(const PileEntie&); // Opérateur d'affectation

    void operator<(const int&); // Empile un entier sur la pile

    void operator>(int&); // Depile un entier de la pile

    friend void swap(PileEntier& p1, PileEntier& p2);

    friend std::ostream& operator <<(std::ostream&, const PileEntier&);

    ~PileEntier();

    void empile(const int&); // Empiler un entier sur la pile

    int depile(); // Renvoi le dernier entier sur la pile et le retire

    bool pleine();

    bool vide();

    void affiche() const; // Affiche le contenu de la pile

private:
    size_t m_size;
    size_t m_capacity;
    int *m_storage;
};

#endif
static void triSelection(polygon2D& poly) {
    vector<point2D> t = poly.m_vPoint2D;
    const int n = (int) poly.m_vPoint2D.size();
    int i, min, j;
    for (i = 0; i < n - 1; ++i) {
        min = i;
        for (j = i + 1; j < n; ++j)
            if (t[j] < t[min]) min = j;
        if (min != i) std::swap(t[i], t[min]);
    }
}