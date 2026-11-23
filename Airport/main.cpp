#include <iostream>

#include "Airport/Airport.cpp"
using namespace std;

int main()
{
    int airCount = 0;
    do
    {
        cout << "Please write how many airplanes: ";
        cin >> airCount;
        
        if (!cin)
        {
            cout << "Please write only a valid number!\n";
            cin.clear();
            cin.ignore(1000, '\n');
        }
    } while ((!cin) || airCount <= 0);

    Airplane *airport = Airport(airCount);
    Print(airport, airCount);

    delete[] airport;
    return 0;
}