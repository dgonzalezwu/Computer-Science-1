#include <iostream>
using namespace std;

int main()
{
    double tractofland_sf;
    double oneacre_sf;
    double tractofland_acres;
    tractofland_sf = 391876;
    oneacre_sf = 43560;
    tractofland_acres = tractofland_sf/oneacre_sf;
    cout << "The tract of land is " << tractofland_acres << " acres."<<endl;
}

