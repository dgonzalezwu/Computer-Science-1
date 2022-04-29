#include <iostream>
using namespace std;
int integer;
int reverse_number(int number)
{
    //where we will store the reversed integer
    int reversed = 0;
    while (number != 0)
    {
        //use *10 on what reversed is to be to make room for a new digit and then calculate remainder of 10 to break up the digits in the original integer to add to reversed one empty digit slot
        reversed = (reversed * 10) + (number % 10);
        //Moving on the next digit and doing this until the all digits are addressed aka when it divides to 0
        number = number / 10;
    }
    return reversed;
}
int main()
{
    cout<<"Input an integer number."<<endl;
    cin>>integer;
    int result = reverse_number(integer);
    cout<<"The reversed integer number of the one inputted is: "<<result<<endl;
}