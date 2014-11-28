#include "../header/Dauphin.h"

using namespace std;

Dauphin::Dauphin(int x, int y, std::string nom, bool isFemale, int vitesse, int profondeur)
        : Animal(x, y, nom, isFemale),
          Mammifere(x, y, nom, isFemale, vitesse),
          Poisson(x, y, nom, isFemale, profondeur) {
    cout << "+++ Constructeur Dauphin" << endl;
}

Dauphin::Dauphin(const Dauphin &d) : Animal(d), Mammifere(d), Poisson(d) {
    cout << "~~~ Constructeur de recopie Dauphin" << endl;
}

void Dauphin::affiche() const {
    cout << "Carte d'identité d'un Dauphin :"
            << "\n\tNom: " << getNom()
            << "\n\tPosition: " << '(' << getX() << ',' << getY() << ')'
            << "\n\tProfondeur de nage: " << getProfondeur()
            << "\n\tVitesse de déplacement: " << getVitesse() << endl;
}

void Dauphin::deplacer() {
    Poisson::deplacer();
}

Dauphin *Dauphin::engendrer(bool isFemale) {
    Mammifere *m = Mammifere::engendrer(isFemale);
    return new Dauphin(m->getX(), m->getY(), m->getNom(), m->estFemelle(), m->getVitesse(), getProfondeur());
}

Dauphin::~Dauphin() {
    cout << "--- Destructeur Dauphin" << endl;
}

ostream &operator<<(std::ostream &os, const Dauphin &d) {
    return os << d.toString();
}

std::string Dauphin::toString() const {
    return Animal::toString()
            + "\n\tProfondeur de nage: " + to_string(getProfondeur())
            + "\n\tVitesse: " + to_string(getVitesse());
}
