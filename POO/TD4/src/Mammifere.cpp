#include "../header/Mammifere.h"

using namespace std;

Mammifere::Mammifere(int x, int y, std::string nom, bool estFemelle, int vitesse)
        : Animal(x, y, nom, estFemelle), m_vitesse(vitesse) {
    cout << "+++ Constructeur Mammifere" << endl;
}

Mammifere::Mammifere(const Mammifere &m)
        : Animal(m), m_vitesse(m.m_vitesse) {
    cout << "~~~ Constructeur de recopie Mammifere" << endl;
}

Mammifere::~Mammifere() {
    cout << "--- Destructeur Mammifere" << endl;
}

void Mammifere::deplacer() {
    setX(getX() + m_vitesse);
    setY(getY() + m_vitesse);
}

Mammifere* Mammifere::engendrer(bool isFemale) {
    if (!estFemelle()) {
        cerr << "Hey ! Je suis un male, je ne peut pas faire de bebe !" << endl;
        return nullptr;
    }
    string name = getNom() + (isFemale ? "_fille" : "_fils");
    cout << "Je donne naissance à un Mammifere " << (isFemale ? "femelle" : "male") << endl;
    // TODO Créer un vrai constructeur par recopie !
    Mammifere *baby = this;
    // On change le nom pour y ajouter un suffixe
    baby->setNom(name);
    return baby;
}

ostream &operator<<(std::ostream &os, const Mammifere &m) {
    return os << m.toString();
}

std::string Mammifere::toString() const {
    return Animal::toString() + "\n\tVitesse: " + to_string(m_vitesse);
}
