#include <iostream>
//Including iomanip so we can set the decimal precision
#include <iomanip>

using namespace std;

int main()
{
    double priceitem1 = 15.95;
    double priceitem2 = 24.95;
    double priceitem3 = 6.95;
    double priceitem4 = 12.95;
    double priceitem5 = 3.95;
    double subtotal = priceitem1 + priceitem2 + priceitem3 + priceitem4 + priceitem5;
    double salestax = 0.07 * subtotal;
    double total = salestax + subtotal;

    //Making it display 2 decimal points to make it look more like a standard bill
    //fixed specifies that even if there are more decimal points or none at all, still two decimal points show no matter what circumstance
    cout << fixed;
    cout << setprecision(2);

    cout << "Price of Item 1: $" << priceitem1 <<endl;
    cout << "Price of Item 2: $" << priceitem2 <<endl;
    cout << "Price of Item 3: $" << priceitem3 <<endl;
    cout << "Price of Item 4: $" << priceitem4 <<endl;
    cout << "Price of Item 5: $" << priceitem5 <<endl;
    cout << "Subtotal: $" << subtotal <<endl;
    cout << "Sales Tax: $"<< salestax <<endl;
    cout << "Total: $" << total <<endl;
}

