#include <iostream>
#include <cmath>
#include "../header/Point.h"

using namespace std;

int Point::nbPts = 0;

Point::Point() : x(0), y(0) {
    ++nbPts;
}

Point::Point(float abs, float ord) : x(abs), y(ord) {
    ++nbPts;
}

void Point::translation(float dx, float dy) {
    x += dx;
    y += dy;
}

void Point::affiche() const {
    cout << "Point de coordonnées" << *this << endl;
}

bool Point::coincide(Point p) const {
    return ((p.x == this->x) && (p.y == this->y));
}

float Point::getX() const {
    return x;
}

void Point::setX(float x) {
    Point::x = x;
}

float Point::getY() const {
    return y;
}

void Point::setY(float y) {
    Point::y = y;
}

int Point::getNbPts() const {
    return nbPts;
}

int Point::distance(const Point &other) {
    return sqrt(pow(other.x - this->x, 2) + pow(other.y - this->y, 2));
}

float Point::distance(const Point &p1, const Point &p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

Point::~Point() {
}

ostream &operator<<(ostream &os, const Point &p) {
    os << '(' << p.getX() << ',' << p.getY() << ')';
    return os;
}
