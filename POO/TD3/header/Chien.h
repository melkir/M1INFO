#ifndef CHIEN_H
#define CHIEN_H

#include <iostream>
#include "Animal.h"

class Chien : public Animal {

public:

    Chien();

    Chien(int age, std::string nom_du_cri, std::string cri);

    Chien& operator=(Animal const&); // opérateur d'affectation

    // virtual facultatif car hérité
    virtual void presenter() const;

    virtual ~Chien();

private:
    std::string cri;
};

#endif // CHIEN_H
