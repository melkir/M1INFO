#include "../header/Mammifere.h"

using namespace std;

Mammifere::Mammifere(int vitesse) : Animal(), m_vitesse(vitesse) {

}

Mammifere::Mammifere(int x, int y, std::string nom, bool estFemelle, int vitesse)
        : Animal(x, y, nom, estFemelle), m_vitesse(vitesse) {
    cout << "+++ Constructeur Mammifere" << endl;
}

Mammifere::~Mammifere() {
    cout << "--- Destructeur Poisson" << endl;
}

void Mammifere::deplacer() {
    m_x += m_vitesse;
    m_y += m_vitesse;
}

Mammifere const * Mammifere::engendrer(bool isFemale) {
    /*s
    if (!isFemale()) {
        cerr << "Hey ! Je suis un male, je ne peut pas faire de bebe !" << endl;
        return nullptr;
    }
    */
    cout << "Je donne naissance à un Mammifere " << (isFemale ? "femelle" : "male") << endl;
    string name = m_nom + (isFemale ? "_fille" : "_fils");
    // On renvoi un pointeur vers le nouveau bebe poisson
    return new Mammifere(m_x, m_y, name, isFemale, 0);
}
