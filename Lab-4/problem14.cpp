#include <iostream>

using namespace std;
int main()
{
    int input;
    bool booleantest = true;
    cout<<"Please input a positive integer."<<endl;
    cin>>input;
    //Prime numbers can only be greater than 1
    if (input <= 1)
    {
        booleantest = false;
    }
    /*
     * Checking if every number before the positive integer we are testing cannot be divided by the number we inputted.
     * If this is not true, then the number is not prime.
     * This tests for all numbers besides 2 and 3 which are already known prime numbers based on the conditions.
     */
    for (int a = 2; a < (input - 1); a++)
    {
        if ((input % a) == 0)
        {
            booleantest = false;
        }
    }

    if (booleantest == true)
    {
        cout<<"This number is a prime number."<<endl;
    }
    else
    {
        cout<<"This number is not a prime number."<<endl;
    }
}
