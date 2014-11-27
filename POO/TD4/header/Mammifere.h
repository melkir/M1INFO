#ifndef __MAMMIFERE_H_
#define __MAMMIFERE_H_

#include "Animal.h"

class Mammifere : virtual public Animal {
public:
    Mammifere(int x, int y, std::string nom, bool estFemelle, int vitesse);

    Mammifere(const Mammifere &m);

    virtual std::string toString() const;

    friend std::ostream &operator<<(std::ostream &os, const Mammifere &m);

    virtual ~Mammifere();

    virtual void deplacer();

    virtual Mammifere *engendrer(bool isFemale);

    int getVitesse() const {
        return m_vitesse;
    }

    void setVitesse(int vitesse) {
        m_vitesse = vitesse;
    }

private:
    int m_vitesse;
};

#endif //__MAMMIFERE_H_
