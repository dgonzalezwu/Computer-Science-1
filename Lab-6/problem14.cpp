#include <iostream>
#include <ctime>
using namespace std;
int amount;
void coinToss()
{
    srand(time(NULL));
    for (int a = 0; a < amount; a++)
    {
        int randNum = (rand() % 2) + 1; //number between 1 and 2
        if (randNum == 1)
        {
            cout<<"heads."<<endl;
        }
        else if(randNum == 2)
        {
            cout<<"tails."<<endl;
        }
    }
}
int main()
{
    cout<<"Please input the amount of times you would like the coin to be tossed."<<endl;
    cin>>amount;
    coinToss();
}