#ifndef TECHNICIEN_H
#define TECHNICIEN_H

#include "Employe.h"

class Technicien : public Employe {
public:
    Technicien();

    virtual ~Technicien();

    virtual void affiche() const;

    virtual double calculer_base_salaire();

private:
    int nb_unite_produite;
    static const double m_BASE = 100, m_PART = 5, m_GAIN_UNITE = 12;
};

#endif

Technicien::Technicien() : Employe() {
    std::cout << "Creation de l'objet Technicien" << std::endl;
}

Technicien::~Technicien() {
    std::cout << "Destruction de l'objet Technicien" << std::endl;
}

void Technicien::affiche() const {
    Employe::affiche();
    std::cout << "Metier : Technicien" << std::endl;
}

double Technicien::calculer_base_salaire() {
    return m_BASE + nb_unite_produite * m_PART * m_GAIN_UNITE;
}