#pragma once
#include <iostream>
using std::ostream;

class Point
{
   friend ostream &operator<<(ostream &, const Point &);

protected:
   int x, y;

public:
   Point(int x = 0, int y = 0);
   void setPoint(int x, int y);
   int getX() const { return x; }
   int getY() const { return y; }
};