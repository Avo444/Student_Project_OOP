#pragma once
#include <iostream>
#include <string>
using namespace std;

class Car
{
    friend ostream &operator<<(ostream &, const Car &);

protected:
    string model;
    int wheel = 0;

public:
    Car(string model, int wheel);
};