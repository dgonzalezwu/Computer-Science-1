#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    double radius, mass, volume, density;
    const double PI  =3.141592653589793238463;
    cout<<"Please input the radius of the sphere in centimeters."<<endl;
    cin>>radius;
    cout<<"Please input the mass of the sphere in grams."<<endl;
    cin>>mass;
    volume = ((double)4/(double)3) * PI * pow(radius, (double)3);
    density = mass/volume;
    cout<<"The density of the sphere is: "<<density<<" g/(cm^3)"<<endl;
}
