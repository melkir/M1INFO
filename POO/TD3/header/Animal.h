#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {

public:

    Animal();

    Animal(int age, std::string nom_du_cri);

    Animal(const Animal&);

    std::string getNomDuCri() const;

    int getAge() const;

    void setNomDuCri(std::string nom_du_cri);

    void setAge(int age);

    void viellir();

    // virtual : résolution dynamique des liens avec passage par pointeur ou référence
    virtual void presenter() const;

    virtual ~Animal();

private:
    std::string nom_du_cri;
    int age;
};

#endif // ANIMAL_H
