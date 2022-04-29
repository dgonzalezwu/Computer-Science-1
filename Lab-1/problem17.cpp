#include <iostream>
//Including iomanip so we can set the decimal precision
#include <iomanip>

using namespace std;

int main()
{
    double mealcharge = 88.67;
    double taxpercent = 0.0675;
    double tippercent = 0.20;
    double tax = mealcharge * taxpercent;
    double subtotal = tax + mealcharge;
    double tip = tippercent * subtotal;
    double total = mealcharge + tax + tip;

    //Making it display 2 decimal points to make it look more like a standard bill
    //fixed specifies that even if there are more decimal points or none at all, still two decimal points show no matter what circumstance
    cout << fixed;
    cout << setprecision(2);

    cout<<"Meal cost: $"<<mealcharge<<endl;
    cout<<"Tax amount: $"<<tax<<endl;
    cout<<"Tip amount: $"<<tip<<endl;
    cout<<"Total bill cost: $"<<total<<endl;
}




