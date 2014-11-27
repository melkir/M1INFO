#include "../header/Dauphin.h"

using namespace std;

Dauphin::Dauphin(int x, int y, std::string nom, bool isFemale, int vitesse, int profondeur)
        : Animal(x, y, nom, isFemale), Mammifere(vitesse), Poisson(profondeur) {

}

void Dauphin::affiche() const {
    Animal::affiche();
    cout << "Profondeur de nage: " << m_profondeur << endl;
    cout << "Vitesse de déplacement: " << m_vitesse << endl;
}

void Dauphin::deplacer() {
    Poisson::deplacer();
}

const Dauphin* Dauphin::engendrer(bool isFemale) {
    /*
    if (!isFemale()) {
        cerr << "Hey ! Je suis un male, je ne peut pas faire de bebe !" << endl;
        return nullptr;
    }
    */
    cout << "Je donne naissance à un Dauphin " << (isFemale ? "femelle" : "male") << endl;
    string name = m_nom + (isFemale ? "_fille" : "_fils");
    // TODO Récupérer la vitesse et la profondeur du père
    return new Dauphin(m_x,m_y, name, isFemale, 0, 0);
}
