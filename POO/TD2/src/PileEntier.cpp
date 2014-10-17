#include <iostream>
#include "../header/PileEntier.h"

using namespace std;

PileEntier::PileEntier() : m_size(0),
                           m_capacity(20),
                           m_storage(NULL) {
}

PileEntier::PileEntier(size_t capacity)
        : m_size(0),
          m_capacity(capacity),
          m_storage(new int[capacity]) {
}

PileEntier::PileEntier(const PileEntier &p)
        : m_storage(new int[p.m_capacity]),
          m_size(p.m_size),
          m_capacity(p.m_capacity) {
    copy(p.m_storage, p.m_storage + m_size, m_storage);
}

PileEntier::PileEntier(PileEntier &&other) : PileEntier() {
    swap(*this, other);
}

PileEntier &PileEntier::operator=(const PileEntier &p) {
    PileEntier temp(p);
    swap(*this, temp);
    return *this;
}

void PileEntier::operator<(int const &e) {
    empile(e);
}

void PileEntier::operator>(int &e) {
    e = depile();
}

PileEntier::~PileEntier() {
    delete[]m_storage;
}

void PileEntier::empile(const int &e) {
    // On vérifie si la pile est pleine
    if (this->pleine()) {
        cout << "\n____La pile est pleine____\n" << endl;
        return;
    }
    // On créer le nouveau tableau
    int *tmp = new int[m_size + 1];
    // On copie les données et on ajoute l'élément
//    for (int i = 0; i < m_size; ++i) tmp[i] = m_storage[i];
    std::copy(m_storage, m_storage + m_size, tmp);
    // On ajoute le nouveau entier à la pile
    tmp[m_size] = e;
    // On libère l’ancien tableau (s’il y en avait un).
    if (m_size > 0) delete[] m_storage;
    // On ajuste les données
    m_storage = tmp;
    m_size++;
}

int PileEntier::depile() {
    // On vérifie si la pile est vide
    if (this->vide()) {
        cout << "\n____La pile est vide____\n" << endl;
        return -1;
    }
    // On créer le nouveau tableau
    int *tmp = new int[m_size - 1];
    // On extrait la donnée et on copie le reste
    int res = m_storage[--m_size];
//    for (int i = 0; i < m_size; ++i) tmp[i] = m_storage[i];
    std::copy(m_storage, m_storage + m_size, tmp);
    m_storage = tmp;
    return res;
}

bool PileEntier::pleine() {
    return m_size == m_capacity;
}

bool PileEntier::vide() {
    return m_size == 0;
}

void PileEntier::affiche() const {
    cout << "Nombre d'éléments : " << m_size << endl;
    for (int i = 0; i < m_size; ++i) cout << m_storage[i] << " ";
    cout << endl;
}

void swap(PileEntier &p1, PileEntier &p2) {
    using std::swap;
    swap(p1.m_storage, p2.m_storage);
    swap(p1.m_size, p2.m_size);
    swap(p1.m_capacity, p2.m_capacity);
}
