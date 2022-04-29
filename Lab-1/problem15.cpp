#include <iostream>

using namespace std;

int main()
{
    int maxgallons = 15;
    int maxmiles_beforerefuel= 375;
    //Formula: miles per gallon (MPG): Miles Driven/Gallons of Gas Used
    int milespergallon = maxmiles_beforerefuel/maxgallons;
    cout<<"Miles per gallon the car gets: "<< milespergallon << " MPG" <<endl;
}

