#include "../header/Technicien.h"

using namespace std;

Technicien::Technicien() : Employe() {
    std::cout << "~Creation de l'objet Technicien" << std::endl;
}

Technicien::~Technicien() {
    std::cout << "~Destruction de l'objet Technicien" << std::endl;
}

void Technicien::affiche() const {
    Employe::affiche();
    std::cout << "Metier : Technicien" << std::endl;
}

double Technicien::calculer_base_salaire() {
    return m_BASE + m_nb_unite_produite * m_PART * m_GAIN_UNITE;
}

int Technicien::getNbUniteProduite() const {
    return m_nb_unite_produite;
}

void Technicien::setNbUniteProduite(int nb_unite_produite) {
    m_nb_unite_produite = nb_unite_produite;
}