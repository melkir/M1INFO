#include <iostream>
#include "../header/Peluche.h"

using namespace std;

Peluche::Peluche(const string nom, const string espece) : m_nom(nom), m_espece(espece) {

}

double Peluche::getPrix() const {
    return m_prix;
}

void Peluche::setPrix(double prix) {
    m_prix = prix;
}

void Peluche::afficheEtiquette() const {
    cout << "Etiquette:"
            << "\n======================================"
            << "\nBonjour mon nom est " << m_nom
            << "\nJe suis un " << m_espece << " et " << "je coûte " << m_prix << " euros"
            << "\n======================================" << endl;
}

void Peluche::rabais(int value) {
    m_prix -= m_prix * (value * 0.01);
    cout << "Attention le prix de " << m_nom << " a baissé de " << value << " %!"
            << "\nprix de " << m_nom << " mis à jour : " << m_prix << endl;
}

void Peluche::augmentation(int value) {
    m_prix += m_prix * (value * 0.01);
    cout << "Attention le prix de " << m_nom << " a augmenté de " << value << " %!"
            << "\nprix de " << m_nom << " mis à jour : " << m_prix << endl;
}

Peluche Peluche::clone() {
    const string name = "copie-" + this->m_nom;
    const string espece = this->m_espece;
    Peluche peluche = Peluche(name, espece);
    peluche.setPrix(this->m_prix);
    return peluche;
}

Peluche::~Peluche() {
    cout << "********************************"
            << "\nDestruction de la peluche : " << m_nom
            << "\n********************************" << endl;
}