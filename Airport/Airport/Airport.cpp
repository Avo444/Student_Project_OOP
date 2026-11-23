#include <iostream>
#include <ctime>

#include "../Airplane/Airplane.cpp"
using namespace std;

Airplane *Airport(int airCount)
{
    Airplane *airport = new Airplane[airCount];

    for (int i = 0; i < airCount; i++)
    {
        cout << "\t\t\t====================== [ Airplane => " << i + 1 << " ] ======================\n";
        airport[i].set();
    }

    return airport;
}

void Print(Airplane *airport, int airCount)
{
    int count = 0;
    time_t now = time(0);
    tm *ltm = localtime(&now);

    for (int i = 0; i < airCount; i++)
    {
        if (airport[i].get_hour() > ltm->tm_hour ||
            (airport[i].get_hour() == ltm->tm_hour &&
             airport[i].get_minute() > ltm->tm_min))
        {
            cout << "\t\t ============ [ " << airport[i].get_direction() << " ] ============\n";
            cout << "\t\t\t\tTime => " << airport[i].get_hour() << ":" << airport[i].get_minute() << "\n";
            count++;
        }
    }

    if (!count)
    {
        cout << "\t\t\t\tNo upcoming flights available";
    }
}