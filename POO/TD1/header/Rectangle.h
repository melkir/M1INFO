#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
    Rectangle();

    Rectangle(int largeur, int hauteur);

    int getLargeur() const;

    int getHauteur() const;

    void setLargeur(int largeur);

    void setHauteur(int hauteur);

    int getPerimetre() const;

    int getSurface() const;

    void affichage() const;

    void affichageProprietes() const;

    ~Rectangle();

private:
    int m_largeur;
    int m_hauteur;
};

#endif
