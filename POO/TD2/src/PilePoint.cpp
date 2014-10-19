#include <iostream>
#include "../header/PilePoint.h"

using namespace std;

PilePoint::PilePoint()
        : m_size(0), m_capacity(20), m_storage(NULL) {
}

PilePoint::PilePoint(const PilePoint &p)
        : m_storage(new Point[m_capacity]),
          m_size(p.m_size),
          m_capacity(p.m_capacity) {
    copy(p.m_storage, p.m_storage + m_size, m_storage);
}

PilePoint &PilePoint::operator=(const PilePoint &p) {
    PilePoint temp(p);
    swap(*this, temp);
    return *this;
}

PilePoint::~PilePoint() {
    delete[]m_storage;
}

PilePoint::PilePoint(size_t capacity)
        : m_size(0), m_capacity(capacity), m_storage(new Point[capacity]) {
}

void PilePoint::empile(const Point &p) {
    if (pleine()) {
        cout << "\n___La pile est pleine___\n" << endl;
        return;
    }
    Point *tmp = new Point[m_size + 1];
    copy(m_storage, m_storage + m_size, tmp);
    tmp[m_size] = p;
    if (m_size > 0) delete[]m_storage;
    m_storage = tmp;
    m_size++;
}

Point PilePoint::depile() {
    if (vide()) {
        cout << "\n___La pile est vide___\n" << endl;
        return Point();
    }
    Point *tmp = new Point[m_size - 1];
    Point res = m_storage[--m_size];
    copy(m_storage, m_storage + m_size, tmp);
    m_storage = tmp;
    return res;
}

void PilePoint::operator<(Point &p) {
    empile(p);
}

void PilePoint::operator>(Point &p) {
    p = depile();
}

bool PilePoint::pleine() {
    return m_size == m_capacity;
}

bool PilePoint::vide() {
    return 0 == m_size;
}


void PilePoint::affiche() const {
    for (int i = 0; i < m_size; ++i) cout << m_storage[i];
    cout << endl;
}

void swap(PilePoint &p1, PilePoint &p2) {
    using std::swap;
    swap(p1.m_capacity, p1.m_capacity);
    swap(p1.m_size, p2.m_size);
    swap(p1.m_storage, p2.m_storage);
}

const size_t PilePoint::getSize() const {
    return m_size;
}

Point PilePoint::get(int i) const {
    return *(m_storage + i);
}

PilePoint::PilePoint(PilePoint &&other) : PilePoint() {
    swap(*this, other);
}
