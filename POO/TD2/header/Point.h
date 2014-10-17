#ifndef POINT_H
#define POINT_H

class Point {
private :
    float x, y;
    static int nbPts;
public :
    Point();

    Point(float, float);

    ~Point();

    void translation(float, float);

    void affiche() const;

    bool coincide(Point p) const;

    float getX() const;

    void setX(float x);

    float getY() const;

    void setY(float y);

    int getNbPts() const;

    int distance(const Point &other);

    static float distance(const Point &p1, const Point &p2);

};

std::ostream &operator<<(std::ostream& os, const Point& p);

#endif