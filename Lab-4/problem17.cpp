#include <iostream>

using namespace std;
int main()
{
    for(int i = 1; i <= 5; i++)
    {
        for(int space = 1; space <= 5-i; ++space)
        {
            cout <<"  ";
        }


        int k = 0;
        while(k != 2*i-1)
        {
            cout << "* ";
            k++;
        }
        k = 0;
        cout << endl;
    }
    return 0;
}
