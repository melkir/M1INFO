#ifndef __DAUPHIN_H_
#define __DAUPHIN_H_

#include "Mammifere.h"
#include "Poisson.h"

class Dauphin : public Poisson, public Mammifere {
public:
    Dauphin(int x, int y, std::string nom, bool isFemale, int vitesse, int profondeur);

    std::string toString() const;

    friend std::ostream &operator<<(std::ostream &os, const Dauphin &d);

    ~Dauphin();

    Dauphin(const Dauphin &d);

    void deplacer();

    Dauphin *engendrer(bool isFemale);

    void affiche() const;
};

#endif //__DAUPHIN_H_
