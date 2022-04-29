#include <iostream>

using namespace std;
int main()
{
    //Write an input validation loop that asks the user to enter a number in the range of 1 through 10.
    double input;
    cout<<"Input a number in the range of 1 through 10."<<endl;
    cin>>input;
    while(input > 10 || input < 1)
    {
        cout<<"Invalid input, only accepting numbers in the range of 1 through 10. Please try again."<<endl;
        cin.ignore();
        cout<<"Input a number in the range of 1 through 10."<<endl;
        cin>>input;
    }
}
