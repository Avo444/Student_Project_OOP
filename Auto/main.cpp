#include <iostream>
#include "./truck/truck.h"
using namespace std;

/*
 Ստեղծել Truck կլասը, որը ժառանգվում է Car կլասից և իրականացնում է հետևյալ ֆունկցիոնալությունը.

1. Դաշտեր (protected)

• double maxLoad — առավելագույն բեռնատարողություն (տոննաներով)
• double currentLoad — ընթացիկ բեռի քաշը (սկզբնական արժեքը՝ 0)

2. Մեթոդներ (public)

• Truck(string model, int wheel, double maxLoad) — կանչում է Car-ի կոնստրուկտորը, արժեքավորում maxLoad-ը (եթե < 0, դարձնում է 0) և currentLoad = 0։
• void loadCargo(double weight) — ավելացնում է բեռը currentLoad-ին, եթե այն չի գերազանցում maxLoad-ը, հակառակ դեպքում տպում է գերբեռնման մասին հաղորդագրություն։
• void unloadCargo(double weight) — նվազեցնում է currentLoad-ը weight-ի չափով, եթե մեքենայում կա այդքան բեռ, հակառակ դեպքում տպում է սխալի հաղորդագրություն։
• կիրառելով overload operator արտածել բեռնատարի մոդելը, անիվների քանակը, առավելագույն բեռնատարողությունը և ընթացիկ բեռը։

3. Ստուգում (main.cpp)

• Ստեղծել Truck օբյեկտ ("Volvo", 6 անիվ, 15.0 տոննա)։
• Տպել սկզբնական տվյալները։
• Բարձել 10 տոննա բեռ։
• Փորձել բարձել ևս 8 տոննա բեռ։
• Դատարկել 4 տոննա բեռ և նորից տպել տվյալները։

 */

int main()
{
    string model;
    int wheel = 0;
    double maxLoad = 0.0;
    cout << "Please write model: ";
    cin >> model;
    cout << "Please write count wheel: ";
    cin >> wheel;
    cout << "Please write maxLoad: ";
    cin >> maxLoad;
    Truck truck = Truck(model, wheel, maxLoad);
    cout << truck;
    return 0;
}