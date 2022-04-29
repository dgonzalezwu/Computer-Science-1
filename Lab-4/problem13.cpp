#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int input;
    bool menu = true;

    while (menu == true)
    {
        cout<<"Geometry Calculator"<<endl;
        cout<<"1. Calculate the Area of a Circle"<<endl;
        cout<<"2. Calculate the Area of a Rectangle"<<endl;
        cout<<"3. Calculate the area of a Triangle."<<endl;
        cout<<"4. Quit"<<endl;
        cout<<"Enter your choice (1-4):"<<endl;
        cin>>input;

        if (input == 1)
        {
            /*
             * the program should ask for the radius of the circle and then display its area.
             * Use the following formula: area=πr2. Use 3.14159 for π and the radius of the circle for r.
             */
            double radius;
            double pi = 3.14159;
            cout<<"Please input the radius of the circle."<<endl;
            cin>>radius;
            while(radius < 0)
            {
                cout<<"Invalid input, only positive values are accepted for the radius. Please try again."<<endl;
                cin.ignore();
                cin>>radius;
            }
            double area = pi*pow(radius, 2);
            cout<<"Area of the Circle is: "<<area<<endl;
        }

        else if(input == 2)
        {
            double length;
            double width;
            cout<<"Please input the length and width of the rectangle."<<endl;
            cin>>length>>width;
            while(length < 0)
            {
                cout<<"Invalid input, only positive values are accepted for the length. Please try again."<<endl;
                cin.ignore();
                cin>>length;
            }
            while(width < 0)
            {
                cout<<"Invalid input, only positive values are accepted for the width. Please try again."<<endl;
                cin.ignore();
                cin>>width;
            }
            double area = length * width;
            cout<<"Area of the Rectangle is: "<<area<<endl;
        }
        else if (input == 3)
        {
            double base;
            double height;
            cout<<"Please input the length of the triangle's base and the height of the triangle."<<endl;
            cin>>base>>height;
            while (base < 0)
            {
                cout<<"Invalid input, only positive values are accepted for the length of the triangle's base. Please try again."<<endl;
                cin.ignore();
                cin>>base;
            }
            while (height < 0)
            {
                cout<<"Invalid input, only positive values are accepted for the height of the triangle. Please try again."<<endl;
                cin.ignore();
                cin>>height;
            }
            double area = base * height * 0.5;
            cout<<"Area of the Triangle is: "<<area<<endl;
        }
        else if (input == 4)
        {
            menu = false;
        }
        else
        {
            cout<<"Invalid input, only numbers between the range of 1 through 4 are accepted in this menu. Please try again."<<endl;
        }
    }
}
