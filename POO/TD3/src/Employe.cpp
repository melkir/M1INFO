#include "../header/Employe.h"

using namespace std;

Employe::Employe() {
    cout << "~Creation de l'objet Employe" << endl;
    cout << "Nom : ";
    cin >> m_nom;
    cout << "Prenom : ";
    cin >> m_prenom;
    cout << "Age : ";
    cin >> m_age;
    cout << "Anciennete : ";
    cin >> m_anciennete;
}

Employe::~Employe() {
    cout << "~Desctruction de l'objet Employe" << endl;
}

void Employe::affiche() const {
    cout << "--- Fiche de " << m_nom << ' ' << m_prenom << " ---"
            << "\nAge : " << m_age << " ans"
            << "\nAnciennete : " << m_anciennete << " ans"
            << endl;
}

Employe::Employe(std::string nom, std::string prenom, int age, int anciennete)
        : m_nom(nom), m_prenom(prenom), m_age(age), m_anciennete(anciennete) {
}

double Employe::calculer_salaire() {
    double base = calculer_base_salaire();
    return base + (0.1 * m_anciennete) * base;
}

std::string Employe::getNom() const {
    return m_nom;
}

void Employe::setNom(std::string &nom) {
    m_nom = nom;
}

std::string Employe::getPrenom() const {
    return m_prenom;
}

void Employe::setPrenom(std::string &prenom) {
    m_prenom = prenom;
}

int Employe::getAge() const {
    return m_age;
}

void Employe::setAge(int age) {
    m_age = age;
}

int Employe::getAnciennete() const {
    return m_anciennete;
}

void Employe::setAnciennete(int anciennete) {
    m_anciennete = anciennete;
}
