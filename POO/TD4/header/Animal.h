#ifndef __ANIMAL_H_
#define __ANIMAL_H_

#include <iostream>

class Animal {
public:
    Animal();

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

#endif // __ANIMAL_H_
