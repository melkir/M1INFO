#include <iostream>
#include "../header/Rectangle.h"

using  namespace std;

Rectangle::Rectangle() {
    do {
        cout << "Dimension (largeur, hauteur) : ";
        cin >> m_largeur >> m_hauteur;
        if (m_largeur < 0 || m_hauteur < 0)
            cerr << "Bad argument for dimension" << endl;
    } while (m_largeur < 0 || m_hauteur < 0);

}

Rectangle::Rectangle(int largeur, int hauteur) {
    m_largeur = largeur;
    m_hauteur = hauteur;
}

int Rectangle::getLargeur() const {
    return m_largeur;
}

int Rectangle::getHauteur() const {
    return m_hauteur;
}

void Rectangle::setLargeur(int largeur) {
    m_largeur = largeur;
}

void Rectangle::setHauteur(int hauteur) {
    m_hauteur = hauteur;
}

int Rectangle::getSurface() const {
    return m_largeur * m_hauteur;
}

int Rectangle::getPerimetre() const {
    return getSurface() * 2;
}


void Rectangle::affichage() const {
    for (int i = 0; i < m_hauteur; ++i) {
        for (int j = 0; j < m_largeur; ++j) cout << '*';
        cout << endl;
    }
}

void Rectangle::affichageProprietes() const {
    cout << "[Propiétés du rectangle]"
            << "\nLargeur : " << m_largeur
            << "\nHauteur : " << m_hauteur
            << "\nSurface : " << getSurface()
            << "\nPerimetre : " << getPerimetre() << endl;
}

Rectangle::~Rectangle() {
}