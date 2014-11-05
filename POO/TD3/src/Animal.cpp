#include <iostream>
#include "../header/Animal.h"

using namespace std;

Animal::Animal() {
    cout << "Création de l'objet Animal" << endl;
    cout << "Age : ";
    cin >> age;
    cout << "Cri : ";
    cin >> nom_du_cri;
}

Animal::Animal(int age, string nom_du_cri)
        : age(age), nom_du_cri(nom_du_cri) {
    cout << "Création de l'objet Animal" << endl;
}

Animal::Animal(const Animal &a)
        : age(a.age), nom_du_cri(a.nom_du_cri) {
}

string Animal::getNomDuCri() const {
    return nom_du_cri;
}

int Animal::getAge() const {
    return age;
}

void Animal::setNomDuCri(string nom_du_cri) {
    this->nom_du_cri = nom_du_cri;
}

void Animal::setAge(int age) {
    this->age = age;
}

void Animal::viellir() {
    ++age;
}

void Animal::presenter() const {
    cout << "--- Présentation de l'animal ---" << endl;
    cout << "L'animal a " << age << " ans et son cri est " << nom_du_cri << endl;
}

Animal::~Animal() {
    cout << "Destruction de l'objet Animal" << endl;
}
