#include <iostream>
#include <string>
#include "../car/car.h"

using namespace std;

class Truck : public Car
{
    friend ostream &operator<<(ostream &output, const Truck &truck);
protected:
    double maxLoad = 0;
    double currentLoad = 0;

public:
    Truck(string model, int wheel, double maxLoad);
    void loadCargo(double weight);
    double unloadCargo(double weight);
};
