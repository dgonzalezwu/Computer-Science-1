#include <iostream>

using namespace std;
int main()
{
    double weight_object1;
    double weight_object2;
    double distance_object1;
    double distance_object2;
    //Prompting the user for the values for the two weights and distances.
    cout<<"Please input the weight of object 1 in pounds."<<endl;
    cin>>weight_object1;
    cout<<"Please input the distance that object 1 is from the fulcrum in inches."<<endl;
    cin>>distance_object1;
    cout<<"Please input the weight of object 2 in pounds."<<endl;
    cin>>weight_object2;
    cout<<"Please input the distance that object 2 is from the fulcrum in inches."<<endl;
    cin>>distance_object2;
    //Seeing if it will balance assuming the balance beam has no weight.
    if ((weight_object1 * distance_object1) == (weight_object2 * distance_object2))
    {
        cout<<"The system will balance."<<endl;
    }
    else
    {
        cout<<"The system will not balance."<<endl;
    }
}

