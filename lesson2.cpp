#include <iostream>
#include <vector>
#include <random>

using namespace std;

class Student
{
private:
    char name[10];
    vector<int> mark;

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
        int n;

        cout << "Please write your name: ";
        cin >> name;

        cout << endl
             << "Please write mark's length: ";
        cin >> n;

        mark.clear();
        mark.reserve(n);

        cout << endl;

        for (int i = 0; i < n; i++)
        {
            mark.push_back(random());
        }
    }

    double Calc()
    {
        double sum = 0;

        for (int i = 0; i < mark.size(); i++)
        {
            sum += mark[i];
        }

        return double(sum / mark.size());
    }

    void Out(double avg)
    {
        cout << "User: " << name << endl;
        cout << "Gendles: ";

        for (int i = 0; i < mark.size(); i++)
        {
            cout << mark[i] << (i != mark.size() - 1 ? ", " : " ");
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