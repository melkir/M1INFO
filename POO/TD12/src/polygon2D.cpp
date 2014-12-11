#include "../header/polygon2D.h"

using namespace std;

point2D polygon2D::barycentre() {
    // for_each avec foncteur _barycentre()
    return std::for_each(m_vPoint2D.begin(), m_vPoint2D.end(), _barycentre());
}

point2D polygon2D::barycentre_1() {
    // Declaration et initialisation des variables
    int sum_x = 0, sum_y = 0, nbElem = (int) m_vPoint2D.size();
    // Calcul de la somme des points
    for (std::vector<point2D>::iterator it = m_vPoint2D.begin(); it != m_vPoint2D.end(); ++it) {
        sum_x += (*it).getX();
        sum_y += (*it).getY();
    }
    // Barycentre : moyenne des points cumulés
    return point2D(sum_x / nbElem, sum_y / nbElem);
}

void polygon2D::tri_std(polygon2D &poly) {
    std::vector<point2D> &t = poly.m_vPoint2D;
    /* L'utilisation d'un foncteur est optionnel car
      operator< est redefini dans la classe point2D */
    std::sort(t.begin(), t.end(), _comparePoint2D());
}

void polygon2D::triSelection(polygon2D &poly) {
    std::vector<point2D> &t = poly.m_vPoint2D;
    const int n = (int) t.size();
    int i, min, j;
    for (i = 0; i < n - 1; ++i) {
        min = i;
        for (j = i + 1; j < n; ++j)
            if (t[j] < t[min]) min = j;
        if (min != i) std::swap(t[i], t[min]);
    }
}

void polygon2D::triSelectionIterator(polygon2D &poly) {
    std::vector<point2D> &t = poly.m_vPoint2D;
    std::vector<point2D>::iterator it, min, jt;
    for (it = t.begin(); it < t.end() - 1; ++it) {
        min = it;
        for (jt = it + 1; jt < t.end(); ++jt)
            if (*jt < *min) min = jt;
        if (min != it) std::swap(*it, *min);
    }
}
