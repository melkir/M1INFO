#include "../header/Commercial.h"

using namespace std;

Commercial::Commercial() : Employe() {
    cout << "~Creation de l'objet Commercial" << endl;
}

Commercial::~Commercial() {
    cout << "~Destruction de l'objet Commercial" << endl;
}

void Commercial::affiche() const {
    Employe::affiche();
    cout << "Metier : Commercial" << endl;
}

double Commercial::calculer_base_salaire() {
    return m_BASE + m_chiffre_affaire * m_PART;
}

double Commercial::getChiffreAffaire() const {
    return m_chiffre_affaire;
}

void Commercial::setChiffreAffaire(double chiffre_affaire) {
    m_chiffre_affaire = chiffre_affaire;
}