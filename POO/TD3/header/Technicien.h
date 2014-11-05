#ifndef TECHNICIEN_H
#define TECHNICIEN_H

#include "Employe.h"

class Technicien : public Employe {
public:
    Technicien();

    virtual ~Technicien();

    virtual void affiche() const;

    virtual double calculer_base_salaire();

    int getNbUniteProduite() const;

    void setNbUniteProduite(int nb_unite_produite);

    static constexpr double m_BASE = 10, m_PART = 10, m_GAIN_UNITE = 10;

private:
    int m_nb_unite_produite;
};

#endif