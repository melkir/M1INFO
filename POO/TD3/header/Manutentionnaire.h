#ifndef MANUTENTIONNAIRE_H
#define MANUTENTIONNAIRE_H

#include "Employe.h"

class Manutentionnaire : public Employe {
public:
    Manutentionnaire();

    virtual ~Manutentionnaire();

    virtual void affiche() const;

    virtual double calculer_base_salaire();

private:
    int nb_heures = 0;
    static const double m_BASE_SALAIRE_HORAIRE = 200;
};

#endif

Manutentionnaire::Manutentionnaire() : Employe() {
    std::cout << "Creation de l'objet Manutentionnaire" << std::endl;
}

Manutentionnaire::~Manutentionnaire() {
    std::cout << "Destruction de l'objet Manutentionnaire" << std::endl;
}

void Manutentionnaire::affiche() const {
    Employe::affiche();
    std::cout << "Metier : Manutentionnaire" << std::endl;
}

double Manutentionnaire::calculer_base_salaire() {
    return m_BASE_SALAIRE_HORAIRE * nb_heures;
}
