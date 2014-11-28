#include "../header/Animal.h"

using namespace std;

Animal::Animal(int x, int y, std::string nom, bool estFemelle)
        : m_x(x), m_y(y), m_nom(nom), m_estFemelle(estFemelle) {
    cout << "+++ Constructeur Animal" << endl;
}

Animal::Animal(const Animal &a)
        : m_x(a.m_x), m_y(a.m_y), m_nom(a.m_nom), m_estFemelle(a.m_estFemelle) {
    cout << "~~~ Constructeur par recopie Animal" << endl;
}

Animal::~Animal() {
    cout << "--- Destructeur Animal" << endl;
}

std::string Animal::toString() const {
    string res = "\tNom: " + m_nom
            + "\n\tPosition: " + '(' + std::to_string(m_x) + ',' + std::to_string(m_y) + ')'
            + "\n\tType: " + (m_estFemelle ? "Femelle" : "Male");
    return res;
}