
#include <iostream>
#include <algorithm>

using namespace std;

class Bank
{
    int hazar;
    int hinghazar;
    int tashazar;
    int qsanhazar;

public:
    Bank(int gumar1, int gumar2, int gumar3, int gumar4)
    {
        hazar = gumar1;
        hinghazar = gumar2;
        tashazar = gumar3;
        qsanhazar = gumar4;
    }
    void withdraw()
    {
        int n;

        cout << "Gumari kanxikacum:" << endl;
        cout << "Greq gumari chap@: ";
        cin >> n;

        if (n <= 0 || n % 1000 != 0)
        {
            cout << "Gumari nvazaguyn sahmanachap@ 1000 dram." << endl;
            return;
        }

        int remainder = n;

        int count20000 = min(remainder / 20000, qsanhazar);
        remainder -= count20000 * 20000;

        int count10000 = min(remainder / 10000, tashazar);
        remainder -= count10000 * 10000;

        int count5000 = min(remainder / 5000, hinghazar);
        remainder -= count5000 * 5000;

        int count1000 = min(remainder / 1000, hazar);
        remainder -= count1000 * 1000;

        if (remainder != 0)
        {
            cout << "Bankomatum chka bavarar gumar." << endl;
            return;
        }

        if (count20000)
        {
            cout << "20000 dramanoc: " << count20000 << " hat" << endl;
        }
        if (count10000)
        {
            cout << "10000 dramanoc: " << count10000 << " hat" << endl;
        }
        if (count5000)
        {
            cout << "5000 dramanoc: " << count5000 << " hat" << endl;
        }
        if (count1000)
        {
            cout << "1000 dramanoc: " << count1000 << " hat" << endl;
        }

        qsanhazar -= count20000;
        tashazar -= count10000;
        hinghazar -= count5000;
        hazar -= count1000;
    }
};

int main()
{
    Bank bank(5, 6, 7, 8);
    bank.withdraw();
    return 0;
}
