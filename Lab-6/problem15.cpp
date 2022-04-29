#include <iostream>

using namespace std;

int north_accident_amount = 0;
int south_accident_amount = 0;
int east_accident_amount = 0;
int west_accident_amount = 0;
int central_accident_amount = 0;

//region_name options for this function is is "north", "south", "east", "west", and "central"
int getNumAccidents(string region_name)
{
    int accidents;
    cout<<"Input the number of automobile accidents reported in the "<<region_name<<" region of the city last year."<<endl;
    if (region_name == "north")
    {
        cin>>north_accident_amount;
        while (north_accident_amount < 0)
        {
            cout<<"Invalid input. The accident number has to be greater than or equal to 0. Please try inputting it again."<<endl;
            cin>>north_accident_amount;
        }
        accidents = north_accident_amount;
    }
    if (region_name == "south")
    {
        cin>>south_accident_amount;
        while (south_accident_amount < 0)
        {
            cout<<"Invalid input. The accident number has to be greater than or equal to 0. Please try inputting it again."<<endl;
            cin>>south_accident_amount;
        }
        accidents = south_accident_amount;
    }

    if(region_name == "east")
    {
        cin>>east_accident_amount;
        while (east_accident_amount < 0)
        {
            cout<<"Invalid input. The accident number has to be greater than or equal to 0. Please try inputting it again."<<endl;
            cin>>east_accident_amount;
        }
        accidents = east_accident_amount;

    }
    if(region_name == "west")
    {
        cin>>west_accident_amount;
        while (west_accident_amount < 0)
        {
            cout<<"Invalid input. The accident number has to be greater than or equal to 0. Please try inputting it again."<<endl;
            cin>>west_accident_amount;
        }
        accidents = west_accident_amount;
    }
    if(region_name == "central")
    {
        cin>>central_accident_amount;
        while (central_accident_amount < 0)
        {
            cout<<"Invalid input. The accident number has to be greater than or equal to 0. Please try inputting it again."<<endl;
            cin>>central_accident_amount;
        }
        accidents = central_accident_amount;
    }
    return accidents;
}

void findLowest(int north, int south, int east, int west, int central)
{
    //picking first accident amount to make initial comparison to find lowest as if we use 0 to initialize it will remain at 0 rather than find lowest
    int lowest_accident_amount = north;
    if(north < lowest_accident_amount)
    {
        lowest_accident_amount = north;
    }
    if (south < lowest_accident_amount)
    {
        lowest_accident_amount = south;
    }
    if (east < lowest_accident_amount)
    {
        lowest_accident_amount = east;
    }
    if (west < lowest_accident_amount)
    {
        lowest_accident_amount = west;
    }
    if (central < lowest_accident_amount)
    {
        lowest_accident_amount = central;
    }

    //Printing out lowest amount
    if (lowest_accident_amount == north)
    {
        cout<<"The north region had the fewest reported automobile accidents last year with a number of "<<lowest_accident_amount<<endl;
    }
    else if (lowest_accident_amount == south)
    {
        cout<<"The south region had the fewest reported automobile accidents last year with a number of "<<lowest_accident_amount<<endl;
    }
    else if (lowest_accident_amount == east)
    {
        cout<<"The east region had the fewest reported automobile accidents last year with a number of "<<lowest_accident_amount<<endl;
    }
    else if (lowest_accident_amount == west)
    {
        cout<<"The west region had the fewest reported automobile accidents last year with a number of "<<lowest_accident_amount<<endl;
    }
    else if (lowest_accident_amount == central)
    {
        cout<<"The central region had the fewest reported automobile accidents last year with a number of "<<lowest_accident_amount<<endl;

    }
}

int main()
{
    getNumAccidents("north");
    getNumAccidents("south");
    getNumAccidents("east");
    getNumAccidents("west");
    getNumAccidents("central");
    findLowest(north_accident_amount, south_accident_amount, east_accident_amount, west_accident_amount, central_accident_amount);
}