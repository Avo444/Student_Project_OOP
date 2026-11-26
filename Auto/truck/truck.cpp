#include <iostream>
#include <string>
#include "./truck.h"

using namespace std;

Truck::Truck(string model, int wheel, double maxLoad) : Car(model, wheel)
{
    this->maxLoad = maxLoad < 0 ? 0 : maxLoad;
    this->currentLoad = 0;
}

ostream &operator<<(ostream &output, const Truck &truck)
{
    output << "================= [ Truck: " << truck.model << " ] =================\n";
    output << "Wheel count => " << truck.wheel << "\n";
    output << "Loading => " << truck.currentLoad << " / " << truck.maxLoad;
    return output;
}