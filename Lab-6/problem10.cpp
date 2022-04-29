#include <iostream>
using namespace std;
double length;
double width;
double height;
double volume()
{
    double volume;
    volume = length * width * height;
    return volume;
}
int main()
{
    string choice;
    bool menu = true;
    while (menu == true)
    {
        cout<<"Please enter the length of the box."<<endl;
        cin>>length;
        cout<<"Please enter the width of the box."<<endl;
        cin>>width;
        cout<<"Please enter the height of the box."<<endl;
        cin>>height;
        //Calling my function
        double result = volume();
        //Printing the return value which is the result
        cout<<"Volume of the box is: "<<result<<endl;
        //Giving user option to enter more box data and calculate it or a sentinel value for exiting
        cout<<"Input 'y' to calculate another box's volume and 'n' for stop and exit."<<endl;
        cin>>choice;
        if (choice == "n")
        {
            menu = false;
        }
    }
}