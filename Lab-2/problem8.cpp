#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double meal_cost, tip_percentage, tax, subtotal, tip, total;
    cout<<"Input the meal charge."<<endl;
    cin>>meal_cost;
    cout<<"Input the tip percentage."<<endl;
    cin>>tip_percentage;
    //Assume tax is 6.75 percent of the meal cost.
    tax = 0.0675 * meal_cost;
    subtotal = tax + meal_cost;
    tip = (tip_percentage/100) * subtotal;
    total = subtotal + tip;
    cout << fixed;
    cout << setprecision(2);
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"Meal cost: $"<<meal_cost<<endl;
    cout<<"Tax amount: $"<<tax<<endl;
    cout<<"Tip amount: $"<<tip<<endl;
    cout<<"Total: $"<<total<<endl;
}

