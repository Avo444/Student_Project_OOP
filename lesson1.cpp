#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class student
{

private:
    int gendles[5];
    char name[30];

public:
    void Input()
    {
        cout << "Please write your name: ";
        cin >> name;
        cout << endl;
    }
    void fillGendle()
    {
        for (int i = 0; i < 5; i++)
        {
            gendles[i] = rand() % 10 + 1;
        }
    }
    double Calc()
    {
        double x = 0;
        for (int i = 0; i < 5; i++)
        {
            x += gendles[i];
        }
        return x / 5.0;
    }
    void Out(double avg)
    {
        cout << "User: " << name << endl
             << "Gendles: => ";

        for (int i = 0; i < 5; i++)
        {
            cout << gendles[i] << " ";
        }

        cout << endl
             << "average: => " << avg << endl;

        cout << endl;
    }
};

int main()
{
    srand(time(0));

    student st[3];
    for (int i = 0; i < 3; i++)
    {
        cout << " ================== [ userID: " << i + 1 << " ] ================== " << endl
             << endl;

        st[i].Input();
        st[i].fillGendle();

        double avg = st[i].Calc();
        st[i].Out(avg);
    }
    return 0;
}