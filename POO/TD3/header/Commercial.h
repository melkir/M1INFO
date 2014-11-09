#ifndef COMMERCIAL_H
#define COMMERCIAL_H

#include "Employe.h"

class Commercial : public Employe {
public:
    Commercial();

    virtual ~Commercial();

    virtual void affiche() const;

    virtual double calculer_base_salaire();

    double getChiffreAffaire() const;

    void setChiffreAffaire(double chiffre_affaire);

    static constexpr double m_BASE = 10.0, m_PART = 10.0;
private:
    double m_chiffre_affaire;
};

#endif