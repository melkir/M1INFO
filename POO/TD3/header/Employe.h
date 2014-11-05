#ifndef EMPLOYE_H
#define EMPLOYE_H

#include <iostream>

class Employe {
public:
    Employe();

    Employe(std::string nom, std::string prenom, int age, int anciennete);

    virtual ~Employe();

    virtual void affiche() const;

    virtual double calculer_base_salaire() = 0;

    virtual double calculer_salaire();

private:
    std::string m_nom, m_prenom;
    int m_age, m_anciennete;
};

#endif