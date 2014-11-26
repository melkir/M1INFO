#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
public:
    Animal(int x, int y, std::string nom, bool estFemelle);

    virtual ~Animal();

    virtual void deplacer() = 0;

    virtual const Animal *engendrer(bool isFemale) = 0;

    virtual void affiche() const;

    bool isFemale() const;

protected:
    int m_x, m_y;
    std::string m_nom;
    bool m_estFemelle;
};

#endif // ANIMAL_H
