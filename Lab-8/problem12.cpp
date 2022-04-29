#include <iostream>

using namespace std;

struct MovieData
{
    string title;
    string director;
    int year_released;
    int running_time; //in minutes
    double production_costs;
    double first_year_revenues;
};

void print_data(MovieData x)
{
    cout<<"Title: "<<x.title<<endl;
    cout<<"Director: "<<x.director<<endl;
    cout<<"Year released: "<<x.year_released<<endl;
    cout<<"Running time: "<<x.running_time<<" minutes"<<endl;
    double income = x.first_year_revenues - x.production_costs;
    if (income < 0)
    {
        cout<<"First year's Loss: $"<<income<<endl;
    }
    else if(income > 0)
    {
        cout<<"First year's Profit: $"<<income<<endl;
    }
}


int main()
{
    MovieData var1;
    var1.title = "Sound of Metal";
    var1.director = "Darius Marder";
    var1.year_released = 2020;
    var1.running_time = 120;
    var1.production_costs = 8000000;
    var1.first_year_revenues = 158165;
    MovieData var2;
    var2.title = "Minari";
    var2.director = "Lee Isaac Chung";
    var2.year_released = 2020;
    var2.running_time = 115;
    var2.production_costs = 2000000;
    var2.first_year_revenues = 12388296;
    print_data(var1);
    cout<<"____________________________________________________"<<endl;
    print_data(var2);
}
