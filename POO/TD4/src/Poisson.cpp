#include "../header/Poisson.h"

using namespace std;

Poisson::Poisson(int x, int y, std::string nom, bool estFemelle, int profondeur)
        : Animal(x, y, nom, estFemelle), m_profondeur(profondeur) {
    cout << "+++ Constructeur Poisson" << endl;
}

Poisson::Poisson(Poisson const &p) : Animal(p), m_profondeur(p.m_profondeur) {
    cout << "~~~ Constructeur de recopie Poisson" << endl;
}

Poisson::~Poisson() {
    cout << "--- Destructeur Poisson" << endl;
}

void Poisson::deplacer() {
    setX(getX() + 1);
    setY(getY() + 1);
}

Poisson* Poisson::engendrer(bool isFemale) {
    if (!estFemelle()) {
        cerr << "Hey ! Je suis un male, je ne peut pas faire de bebe !" << endl;
        return nullptr;
    }
    cout << "Je donne naissance à un Poisson " << (isFemale ? "femelle" : "male") << endl;
    string name = getNom() + (isFemale ? "_fille" : "_fils");
    // On renvoi un pointeur vers le nouveau bebe poisson
    return new Poisson(getX(), getY(), name, isFemale, m_profondeur);
}

ostream &operator<<(std::ostream &os, const Poisson &p) {
    return os << p.toString();
}

std::string Poisson::toString() const {
    return Animal::toString() + "\n\tProfondeur de nage: " + to_string(m_profondeur);
}
