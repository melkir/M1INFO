#ifndef __POISSON_H_
#define __POISSON_H_

#include "Animal.h"

class Poisson : virtual public Animal {
public:
    Poisson(int x, int y, std::string nom, bool estFemelle, int profondeur);

    Poisson(int i);

    virtual ~Poisson();

    virtual void deplacer();

    virtual const Poisson* engendrer(bool isFemale);

protected:
    int m_profondeur;
};

#endif //__POISSON_H_
