#include "../header/Animal.h"

using namespace std;

Animal::Animal() {

}

Animal::Animal(int x, int y, std::string nom, bool estFemelle)
        : m_x(x), m_y(y), m_nom(nom), m_estFemelle(estFemelle) {
    cout << "+++ Constructeur Animal" << endl;
}

bool Animal::isFemale() const {
    return m_estFemelle;
}

Animal::~Animal() {
    cout << "--- Destructeur Animal" << endl;
}

void Animal::affiche() const {
    cout << "Nom: " << m_nom
            << "\nPosition: " << '(' << m_x << ',' << m_y << ')'
            << endl;
}
