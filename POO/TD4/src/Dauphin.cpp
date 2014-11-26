#include "../header/Dauphin.h"

using namespace std;

Dauphin::Dauphin(int x, int y, std::string nom, bool isFemale, int vitesse, int profondeur)
        : Animal(x, y, nom, isFemale), m_vitesse(vitesse), m_profondeur(profondeur) {

}

void Dauphin::affiche() const {
    Animal::affiche();
    cout << "Profondeur de nage: " << m_profondeur << endl;
    cout << "Vitesse de déplacement: " << m_vitesse << endl;
}

void Dauphin::deplacer() {
    Poisson::deplacer();
}

const Mammifere* Dauphin::engendrer(bool isFemale) {
    return Mammifere::engendrer(isFemale);
}
