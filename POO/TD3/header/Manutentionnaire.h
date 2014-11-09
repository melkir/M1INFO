#ifndef MANUTENTIONNAIRE_H
#define MANUTENTIONNAIRE_H

#include "Employe.h"

class Manutentionnaire : public Employe {
public:
    Manutentionnaire();

    virtual ~Manutentionnaire();

    virtual void affiche() const;

    virtual double calculer_base_salaire();

    int getNbHeures() const;

    void setNbHeures(int nb_heures);

    static constexpr double m_BASE_SALAIRE_HORAIRE = 10;
private:
    int m_nb_heures = 0;
};

#endif