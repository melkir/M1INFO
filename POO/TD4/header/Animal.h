#ifndef __ANIMAL_H_
#define __ANIMAL_H_

#include <iostream>

class Animal {
public:
    Animal(int x, int y, std::string nom, bool estFemelle);

    Animal(const Animal& a);

    virtual std::string toString() const;

    friend std::ostream& operator<<(std::ostream& os, const Animal& a);

    virtual ~Animal();

    virtual void deplacer() = 0;

    virtual Animal *engendrer(bool isFemale) = 0;

    int getX() const {
        return m_x;
    }

    void setX(int x) {
        m_x = x;
    }

    int getY() const {
        return m_y;
    }

    void setY(int y) {
        m_y = y;
    }

    const std::string &getNom() const {
        return m_nom;
    }

    void setNom(std::string nom) {
        m_nom = nom;
    }

    bool estFemelle() const {
        return m_estFemelle;
    }

    void setEstFemelle(bool estFemelle) {
        m_estFemelle = estFemelle;
    }

private:
    int m_x, m_y;
    std::string m_nom;
    bool m_estFemelle;
};

#endif // __ANIMAL_H_
