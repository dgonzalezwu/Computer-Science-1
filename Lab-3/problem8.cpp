#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double a, b, c;
    double x1, x2;
    double test;
    cout<<"Enter the value of a for the quadratic equation."<<endl;
    cin>>a;
    cout<<"Enter the value of b for the quadratic equation."<<endl;
    cin>>b;
    cout<<"Enter the value of c for the quadratic equation."<<endl;
    cin>>c;
    /*We are going to calculate the discriminant as it tells you how many roots a function has. The discriminant is b^2 - 4ac
     *1. If b^2 −4ac < 0 There are no real roots.
     *2. If b^2 −4ac = 0 There is one real root.
     *3. b^2 −4ac > 0 There are two real roots.
     */

    test = (pow(b, 2)) - (4*a*c);

    if (a == 0)
    {
        cout<<"This is not a quadratic equation."<<endl;
        if (b == 0)
        {
            cout<<"There is no real roots."<<endl;
            cout<<"This is because a = 0 and b = 0, so the function is just at a constant value."<<endl;
        }
        else
        {
            cout<<"There is one real root."<<endl;
            x1 = (-c / b);
            cout<<"x1 = "<<x1<<endl;
        }
    }
    else
    {
        if (test < 0)
        {
            cout<<"There are no real roots."<<endl;
            cout<<"This is because the discriminant we calculated is a negative number and therefore not able to be squared to produce"<<endl;
            cout<<"a real root answer."<<endl;
            cout<<"The parabola this formula represents does not intersect the x-axis."<<endl;
        }
        else if(test > 0)
        {
            cout<<"There are two real roots."<<endl;
            x1 = (-b + sqrt((pow(b, 2)) - (4*a*c)))/(2*a);
            x2 = (-b - sqrt((pow(b, 2)) - (4*a*c)))/(2*a);
            cout<<"x1 = "<<x1<<endl;
            cout<<"x2 = "<<x2<<endl;
        }
        else if(test == 0)
        {
            cout<<"There is one real root."<<endl;
            x1 = (-b/(2*a));
            cout<<"x1 = "<<x1<<endl;
        }
    }
}



