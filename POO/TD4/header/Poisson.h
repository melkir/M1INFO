#ifndef __POISSON_H_
#define __POISSON_H_

#include "Animal.h"

class Poisson : virtual public Animal {
public:
    Poisson(int x, int y, std::string nom, bool estFemelle, int profondeur);

    Poisson(const Poisson &p);

    virtual std::string toString() const;

    friend std::ostream &operator<<(std::ostream &os, const Poisson &m);

    virtual ~Poisson();

    virtual void deplacer();

    virtual Poisson *engendrer(bool isFemale);

    int getProfondeur() const {
        return m_profondeur;
    }

    void setProfondeur(int profondeur) {
        m_profondeur = profondeur;
    }

private:
    int m_profondeur;
};

#endif //__POISSON_H_
