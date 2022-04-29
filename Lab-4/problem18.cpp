#include <iostream>

using namespace std;
int main()
{
    //First row as it does not correspond with the linear equation formed
    for (int i = 1; i < 2; i++)
    {
        for(int space = 1; space <= 5-i; ++space)
        {
            cout <<"  ";
        }
        cout << "* "<<endl;
    }
    //Rest of the rows can be computed through a linear equation
    for(int i = 2; i <= 5; i++)
    {
        for(int space = 1; space <= 5-i; ++space)
        {
            cout <<"  ";
        }

        cout << "* ";
        int k = 1;
        while(k != 2*i-2)
        {
            cout << "  ";
            k++;
        }
        if (k >= 1)
        {
            cout<<"* ";
        }
        k = 1;
        cout << endl;
    }
    return 0;
}