#ifndef __QUEUE_H_
#define __QUEUE_H_

template<class T>
class Queue {
public:
    Queue(int);

    Queue(const Queue<T> &);

    ~Queue();

    void affiche() const;

    T pop(); // Retire un element de la file

    void push(const T &); // Ajoute un element a la file

    inline T get(int i) const {
        return m_data[i];
    }

    // Renvoie le premier element de la file
    inline T front() const {
        return m_data[m_indiceTete];
    }

    // Renvoie le dernier element de la file
    inline T back() const {
        return m_data[m_indiceQueue - 1];
    }

    inline bool empty() const {
        return 0 == m_nbElem;
    };

    inline int size() const {
        return m_nbElem;
    }

private:
    int m_indiceTete, m_indiceQueue;
    int m_capacity;
    int m_nbElem;
    T *m_data;
};

#include "Queue.tpp"

#endif //__QUEUE_H_
