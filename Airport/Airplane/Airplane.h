#include <iostream>
#include <string>
using namespace std;

class Airplane
{
private:
    string dir;
    int hour = 0;
    int min = 0;

public:
    int get_hour();
    int get_minute();
    string get_direction();
    void set();
};