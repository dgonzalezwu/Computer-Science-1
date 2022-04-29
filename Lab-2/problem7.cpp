#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double item1price, item2price, item3price, item4price, item5price, subtotal, tax, total;
    cout<<"Input the price of item 1."<<endl;
    cin>>item1price;
    cout<<"Input the price of item 2."<<endl;
    cin>>item2price;
    cout<<"Input the price of item 3."<<endl;
    cin>>item3price;
    cout<<"Input the price of item 4."<<endl;
    cin>>item4price;
    cout<<"Input the price of item 5."<<endl;
    cin>>item5price;
    subtotal = item1price + item2price + item3price + item4price + item5price;
    //Assume sales tax is 7%
    tax = 0.07*subtotal;
    total = subtotal + tax;
    cout << fixed;
    cout << setprecision(2);
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"Price of item 1: $"<<item1price<<endl;
    cout<<"Price of item 2: $"<<item2price<<endl;
    cout<<"Price of item 3: $"<<item3price<<endl;
    cout<<"Price of item 4: $"<<item4price<<endl;
    cout<<"Price of item 5: $"<<item5price<<endl;
    cout<<"Subtotal: $"<<subtotal<<endl;
    cout<<"Sales Tax: $"<<tax<<endl;
    cout<<"Total: $"<<total<<endl;
}

