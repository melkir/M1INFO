#include "../header/Employe.h"

using namespace std;

Employe::Employe() {
    cout << "Creation de l'objet Employe" << endl;
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
    cout << "Desctruction de l'objet Employe" << endl;
}

void Employe::affiche() const {
    cout << " Fiche de " << m_nom << ' ' << m_prenom
            << "\nAge : " << m_age << " ans"
            << "\nAnciennete : " << m_anciennete << endl;
}

Employe::Employe(std::string nom, std::string prenom, int age, int anciennete)
        : m_nom(nom), m_prenom(prenom), m_age(age), m_anciennete(anciennete) {
}

double Employe::calculer_salaire() {
    double base = calculer_base_salaire();
    return base + (0.1 * m_anciennete) * base;
}
