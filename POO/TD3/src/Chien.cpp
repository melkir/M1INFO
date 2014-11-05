#include "../header/Chien.h"

using namespace std;

Chien::Chien() {
    cout << "Creation de l'objet Chien" << endl;
}

Chien::Chien(int age, std::string nom_du_cri, std::string cri)
        : Animal(age, nom_du_cri), cri(cri) {
    cout << "Creation de l'objet Chien" << endl;
}

void Chien::presenter() const {
    Animal::presenter();
    int age = getAge();
    cout << "Le chien a " << age << " ans et aboie ";
    if (age < 6) cout << cri;
    else cout << cri << cri << cri;
    cout << endl;
}

Chien::~Chien() {
    cout << "Destruction de l'objet Chien" << endl;
}

Chien &Chien::operator=(Animal const &a) {
    this->setAge(a.getAge());
    this->setNomDuCri(a.getNomDuCri());
    cri = "";
}
