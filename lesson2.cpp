#include <iostream>
#include <random>

using namespace std;

class Student
{
private:
    int n;
    int *mark;
    char name[10];

public:
    int random()
    {
        random_device rd;
        mt19937 gen(rd());

        uniform_int_distribution<int> dist(1, 10);

        return dist(gen);
    }
    void Input()
    {
        cout << "Please write your name: ";
        cin >> name;

        cout << endl
             << "Please write mark's length: ";
        cin >> n;
        mark = new int[n];
        cout << endl;

        for (int i = 0; i < n; i++)
        {
            mark[i] = random();
        }
    }

    double Calc()
    {
        double sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += mark[i];
        }
        
        return double (sum / n);
    }

    void Out(double avg)
    {
        cout << "User: " << name << endl;
        cout << "Gendles: ";

        for (int i = 0; i < n; i++)
        {
            cout << mark[i] << (i != n - 1 ? ", " : " ");
        }

        cout << endl
             << "Average: " << avg << endl;
    }
};

int main()
{
    Student st;
    st.Input();
    double avg = st.Calc();
    st.Out(avg);
}