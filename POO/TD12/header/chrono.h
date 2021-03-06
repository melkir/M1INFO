#ifndef __CHRONO_H_
#define __CHRONO_H_

#include <ctime>

/** Chronometre utile pour calculer le temps d'execution d'une fonction ou d'un programme */
class chrono {
public:
    /** Initialise les variables a 0 */
    chrono() : m_begin(0), m_end(0) {
    }

    /** Enregistre l'heure de debut */
    void debut() {
        // Initialise le chrono a l'heure du PC
        m_begin = (int) clock();
    }

    /** Enregistre l'heure de fin */
    void fin() {
        // Initialise le chrono a l'heure du PC
        m_end = (int) clock();
    }

    /** Renvoi le temps ecoule entre le debut et la fin */
    const double temps() {
        return (double) (m_end - m_begin) / CLOCKS_PER_SEC;
    }

private:
    /** Heure de debut */
    int m_begin,
	/** Heure de fin */
	m_end;
};

#endif //__CHRONO_H_
