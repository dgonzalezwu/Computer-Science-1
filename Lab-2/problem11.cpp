#include <iostream>
using namespace std;

int main()
{
    string month1, month2, month3;
    double month1_rain_amount, month2_rain_amount, month3_rain_amount, average_rainfall_3months;
    cout<<"Enter the name of first month."<<endl;
    cin>>month1;
    cout<<"Enter the amount of rain that fell during the first month in inches."<<endl;
    cin>>month1_rain_amount;
    cout<<"Enter the name of the second month."<<endl;
    cin>>month2;
    cout<<"Enter the amount of rain that fell during the second month in inches."<<endl;
    cin>>month2_rain_amount;
    cout<<"Enter the name of the third month."<<endl;
    cin>>month3;
    cout<<"Enter the amount of rain that fell during the third month in inches."<<endl;
    cin>>month3_rain_amount;
    average_rainfall_3months = (month1_rain_amount + month2_rain_amount + month3_rain_amount)/(double)3;
    cout<<"The average rainfall for "<<month1 + ", "<<month2 + ", and "<<month3 + " is "<<average_rainfall_3months<<" inches."<<endl;

}
