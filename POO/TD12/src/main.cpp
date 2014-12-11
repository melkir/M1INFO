#include <iostream>
#include "../header/polygon2D.h"

using namespace std;

int main() {
    point2D a(2, 1), b(5, 3), c(6, 7);
    polygon2D poly2D;
    poly2D.push(a);
    poly2D.push(b);
    poly2D.push(c);
//    cout << poly2D.barycentre() << endl;
//    cout << poly2D.barycentre_1() << endl;
    cout << "Avant" << endl;
    cout << poly2D;
    cout << "Apres" << endl;
    polygon2D::triSelection(poly2D, (int) poly2D.getSize());
    return 0;
}