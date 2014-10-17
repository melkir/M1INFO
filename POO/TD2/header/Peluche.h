#ifndef PELUCHE_H
#define PELUCHE_H

class Peluche {
public:
    Peluche(const std::string nom, const std::string espece);

    double getPrix() const;

    void setPrix(double prix);

    void afficheEtiquette() const;

    void rabais(int value);

    void augmentation(int value);

    Peluche clone();

    ~Peluche();

private:
    const std::string m_nom;
    const std::string m_espece;
    double m_prix;
};

#endif