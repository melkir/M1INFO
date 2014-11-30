#include <iostream>

#include "../header/Queue.h"

using std::cout;
using std::endl;

template<class T>
Queue<T>::Queue(int size) :
        m_data(new T[size]), m_capacity(size),
        m_indiceTete(0), m_indiceQueue(0), m_nbElem(0) {
    cout << "+++ Création de la file" << endl;
}

template<class T>
Queue<T>::~Queue() {
    cout << "--- Destruction de la file" << endl;
    if (m_capacity > 0) delete[] m_data;
}

template<class T>
Queue<T>::Queue(Queue<T> const &q) :
        m_data(new T[q.m_capacity]), m_capacity(q.m_capacity),
        m_indiceTete(q.m_indiceTete), m_indiceQueue(q.m_indiceQueue), m_nbElem(q.m_nbElem) {
    std::copy(q.m_data, q.m_data + m_capacity, m_data);
}

template<class T>
void Queue<T>::affiche() const {
    cout << "**** Affichage de la file ****"
            << "\nNb d'éléments présents dans la file: " << m_nbElem
            << "\nCapacité totale de la file: " << m_capacity
            << "\nTête de la file: " << front()
            << "\nQueue de la file: " << back()
            << "\nElements de la file:\n";
    for (int i = m_indiceTete; i < m_indiceTete + m_nbElem; ++i)
        cout << T(m_data[i]) << " ";
    cout << endl;
}

template<class T>
void Queue<T>::push(const T &e) {
    // Error Check: Make sure we aren't exceeding our maximum storage space
    assert(m_nbElem < m_capacity);
    m_data[m_indiceQueue++] = e;
    ++m_nbElem;
    // Check for wrap-around
    if (m_indiceQueue > m_capacity) {
        m_indiceQueue -= (m_capacity + 1);
    }
}

template<class T>
T Queue<T>::pop() {
    // Error Check: Make sure we aren't dequeueing from an empty queue
    assert(m_nbElem > 0);
    T res = m_data[m_indiceTete++];
    --m_nbElem;
    if (m_indiceTete > m_capacity) {
        m_indiceTete -= (m_capacity + 1);
    }
    return res;
}
