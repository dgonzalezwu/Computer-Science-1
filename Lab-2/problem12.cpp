#include <iostream>
#include <cstdlib>   // rand and srand
#include <ctime>     // For the time function
using namespace std;

int main()
{
    int num1, num2;
    //Seeding the random number generator so it produces a different number each time
    srand(time(0));
    num1 = rand();
    num2 = rand();
    if (num1 > num2)
    {
        cout<<"When ready to check the answer, press the enter key."<<endl;
        cout<<" "<<num1<<endl;
        cout<<"+"<<num2<<endl;
        cout<<"_________";
        cin.ignore();
        cout<<num1+num2<<endl;
    }
    if (num2 > num1)
    {
        cout<<"When ready to check the answer, press the enter key."<<endl;
        cout<<" "<<num2<<endl;
        cout<<"+"<<num1<<endl;
        cout<<"_________";
        cin.ignore();
        cout<<num2+num1<<endl;
    }
}