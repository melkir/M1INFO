#ifndef COMMERCIAL_H
#define COMMERCIAL_H

#include "Employe.h"

using namespace std;

class Commercial : public Employe {
public:
    Commercial();

    virtual ~Commercial();

    virtual void affiche() const;

    virtual double calculer_base_salaire();

private:
    double m_chiffre_affaire;
    static const double m_BASE = 250, m_PART = 10;
};

#endif

Commercial::Commercial() : Employe() {
    cout << "Creation de l'objet Commercial" << endl;
}

Commercial::~Commercial() {
    cout << "Destruction de l'objet Commercial" << endl;
}

void Commercial::affiche() const {
    Employe::affiche();
    cout << "Metier : Commercial" << endl;
}

double Commercial::calculer_base_salaire() {
    return m_BASE + m_chiffre_affaire * m_PART;
}

