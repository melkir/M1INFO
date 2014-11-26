#include <rdf_serializer.h>
#include "../header/Poisson.h"

using namespace std;

Poisson::Poisson(int x, int y, std::string nom, bool estFemelle, int profondeur)
        : Animal(x, y, nom, estFemelle), m_profondeur(profondeur) {
    cout << "+++ Constructeur Poisson" << endl;
}

Poisson::~Poisson() {
    cout << "--- Destructeur Poisson" << endl;
}

void Poisson::deplacer() {
    ++m_x;
    ++m_y;
    ++m_profondeur;
}

virtual const Poisson* Poisson::engendrer(bool isFemale) {
    if (!isFemale()) {
        cerr << "Hey ! Je suis un male, je ne peut pas faire de bebe !" << endl;
        return nullptr;
    }
    cout << "Je donne naissance à un Poisson " << (isFemale ? "femelle" : "male") << endl;
    string name = m_nom + (isFemale ? "_fille" : "_fils");
    // On renvoi un pointeur vers le nouveau bebe poisson
    return new Poisson(m_x, m_y, name, isFemale, 0);
}