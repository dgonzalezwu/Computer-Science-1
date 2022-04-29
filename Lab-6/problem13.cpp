#include <iostream>
using namespace std;
int integer;
int summation(int N)
{
    int sum = 0;
    for (int a = 1; a <= N ;a++)
    {
        sum = sum + a;
    }
    return sum;
}
int main()
{
    bool menu = true;
    string choice;
    while (menu == true)
    {
        cout<<"Input an integer number."<<endl;
        cin>>integer;
        int result = summation(integer);
        cout<<"The summation of integers from 1 to the inputted integer is:"<<result<<endl;
        cout<<"Input 'y' to calculate another summation from 0 to inputted integer and 'n' for stop and exit."<<endl;
        cin>>choice;
        if (choice == "n")
        {
            menu = false;
        }
    }
}