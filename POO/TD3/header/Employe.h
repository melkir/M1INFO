#ifndef EMPLOYE_H
#define EMPLOYE_H

#include <iostream>

class Employe {
public:
    Employe();

    Employe(std::string nom, std::string prenom, int age, int anciennete);

    virtual ~Employe();

    virtual void affiche() const;

    virtual double calculer_base_salaire() = 0;

    virtual double calculer_salaire();

    std::string getNom() const;

    void setNom(std::string &nom);

    std::string getPrenom() const;

    void setPrenom(std::string &prenom);

    int getAge() const;

    void setAge(int age);

    int getAnciennete() const;

    void setAnciennete(int anciennete);

private:
    std::string m_nom, m_prenom;
    int m_age, m_anciennete;
};

#endif