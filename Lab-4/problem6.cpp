#include <iostream>

using namespace std;
int main()
{
    //Write an input validation loop that asks the user to enter āyā or ānā.
    string input;
    cout<<"Please input 'y' or 'n'."<<endl;
    cin>>input;
    bool test = true;
    while(test == true)
    {
        if(input == "y")
        {
            test = false;
        }
        else if(input == "n")
        {
            test = false;
        }
        else
        {
            cout<<"Invalid input, only 'y' or 'n' are allowed to be entered. Please try again."<<endl;
            cin.ignore();
            cin>>input;
        }
    }
}
