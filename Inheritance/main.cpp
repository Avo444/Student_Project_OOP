#include <iostream>
using std::cout;
using std::endl;

#include "pointer/pointer.h"
#include "circle/circle.h"
#include "cylinder/cylinder.h"

int main()
{

    Point p(7, 11);
    cout << "Point p: " << p << "\n\n";

    Circle c(3.5, 22, 8);
    cout << "Circle c:\n"
         << c
         << "\nArea of c: " << c.area() << "\n\n";

    Cylinder cyl(10.0, 3.5, 10, 10);
    cout << "Cylinder cyl:\n"
         << cyl
         << "\nArea of cyl: " << cyl.area()
         << "\nVolume of cyl: " << cyl.volume() << "\n\n";

    cyl.setHeight(15.0);
    cyl.setRadius(4.0);
    cyl.setPoint(2, 2);

    cout << "New Cylinder cyl:\n"
         << cyl
         << "\nNew Area: " << cyl.area()
         << "\nNew Volume: " << cyl.volume() << endl;

    return 0;
}