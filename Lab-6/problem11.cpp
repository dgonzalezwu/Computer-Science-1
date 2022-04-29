#include <iostream>
using namespace std;
int integer;
int num_digits(int number)
{
    int digit = 0;
    //digits grow in multiple of ten so if we divide by ten until the digit divides to zero we can count digit amount
    while (number != 0)
    {
        digit++;
        number = number/10;
    }
    return digit;
}
int main()
{
    cout<<"Input an integer number."<<endl;
    cin>>integer;
    int result = num_digits(integer);
    cout<<"The number of digits in this integer is: "<<result<<endl;
}