#include <iostream>
#include <string>
#include "./car.h"
using namespace std;

Car::Car(string model, int wheel)
{
    while (wheel < 4 || wheel % 2 != 0)
    {
        cout << "Invalid wheel count (must be even and >= 4)! Enter again: ";
        cin >> wheel;
    }
    this->model = model;
    this->wheel = wheel;
}