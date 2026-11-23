#include <iostream>
#include <string>

#include "Airplane.h"
using namespace std;

int Airplane::get_hour()
{
    return hour;
}

int Airplane::get_minute()
{
    return min;
}

string Airplane::get_direction()
{
    return dir;
}

void Airplane::set()
{

    cout << "Please write direction for plain: For example => 'Armenia - Russia'\n";
    cin >> dir;

    do
    {
        cout << "Please write the hour when plain is flying: ";
        cin >> hour;

        if (!cin)
        {
            cout << "Please write valid number [0 - 59]\n";
            cin.clear();
            cin.ignore(1000, '\n');
            hour = -1;
        }

    } while (hour < 0 || hour > 24);

    // while (true)
    // {
    //     cout << "Please write the hour when plain is flying: ";
    //     cin >> hour;

    //     if (cin && hour >= 0 && hour <= 23)
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         cout << "Please write valid number [0 - 59]\n";
    //         cin.clear();
    //         cin.ignore(1000, '\n');
    //     }
    // }

    do
    {

        cout << "Please write the minute when plain is flying: ";
        cin >> min;

        if (!cin)
        {
            cout << "Please write valid number [0 - 59]\n";
            cin.clear();
            cin.ignore(1000, '\n');
            min = -1;
        }
    } while (min < 0 || min > 59);

    // while (true)
    // {x
    //     cout << "Please write the minute when plain is flying: ";
    //     cin >> min;

    //     if (cin && min >= 0 && min <= 59)
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         cout << "Please write valid number [0 - 59]\n";
    //         cin.clear();
    //         cin.ignore(1000, '\n');
    //     }
    // }
}