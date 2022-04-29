#include <iostream>

using namespace std;
int main()
{
    //Write a for loop that displays all of the odd numbers, 1 through 49.
    for (int x = 1; x < 50; x++)
    {
        if ((x % 2) != 0)
        {
            cout<<x<<endl;
        }
    }
}
