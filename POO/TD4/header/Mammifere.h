#ifndef __MAMMIFERE_H_
#define __MAMMIFERE_H_

#include "Animal.h"

class Mammifere : virtual public Animal {
public:
    Mammifere(int x, int y, std::string nom, bool estFemelle, int vitesse);

    Mammifere(int i);

    virtual ~Mammifere();

    virtual void deplacer();

    virtual const Mammifere* engendrer(bool isFemale);

protected:
    int m_vitesse;
};

#endif //__MAMMIFERE_H_
