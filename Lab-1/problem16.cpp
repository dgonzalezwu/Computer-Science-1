#include <iostream>

using namespace std;

int main()
{
    double maxgallon = 20;
    double averageintown = 23.5;
    double averageonhighway = 28.9;
    //Formula to calculate the distance: Distance = Number of Gallons\times * Average Miles per Gallon
    double maxdistanceintown = averageintown * maxgallon;
    double maxdistanceonhighway = averageonhighway * maxgallon;

    cout<<"The distance the car can travel on one tank of gas when driven in town: " << maxdistanceintown <<" miles"<<endl;
    cout<<"The distance the car can travel on one tank of gas when driven on the highway: " << maxdistanceonhighway <<" miles"<<endl;
}

