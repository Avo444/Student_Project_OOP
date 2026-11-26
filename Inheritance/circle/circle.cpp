#include "circle.h"

Circle::Circle( double r, int x, int y ) : Point( x, y ) {
   setRadius( r );
}

void Circle::setRadius( double r ) {
   radius = ( r >= 0 ? r : 0 );
}

double Circle::getRadius() const {
   return radius;
}

double Circle::area() const {
   return 3.14159 * radius * radius;
}

ostream &operator<<( ostream &output, const Circle &c ) {
   output << "Center = [" << c.x << ", " << c.y << "]"
          << "; Radius = " << c.radius;
   return output;
}