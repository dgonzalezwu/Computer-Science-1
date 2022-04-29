#include <iostream>
using namespace std;

int main()
{
    double fahrenheit_input, celsius_conversion;
    cout<<"Please input the temperature in Fahrenheit.";
    cin>>fahrenheit_input;
    celsius_conversion = (fahrenheit_input - 32)*((double)5/(double)9);
    cout<<"The temperature equivalent in Celsius is: "<<celsius_conversion<<endl;
}
