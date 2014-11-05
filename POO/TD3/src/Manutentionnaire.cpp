#include "../header/Manutentionnaire.h"

using namespace std;

Manutentionnaire::Manutentionnaire() : Employe() {
    cout << "~Creation de l'objet Manutentionnaire" << endl;
}

Manutentionnaire::~Manutentionnaire() {
    cout << "~Destruction de l'objet Manutentionnaire" << endl;
}

void Manutentionnaire::affiche() const {
    Employe::affiche();
    cout << "Metier : Manutentionnaire" << endl;
}

double Manutentionnaire::calculer_base_salaire() {
    return m_BASE_SALAIRE_HORAIRE * m_nb_heures;
}

int Manutentionnaire::getNbHeures() const {
    return m_nb_heures;
}

void Manutentionnaire::setNbHeures(int nb_heures) {
    m_nb_heures = nb_heures;
}