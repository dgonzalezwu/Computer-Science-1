#include <iostream>

using namespace std;
int main()
{
    string runner1_name, runner2_name, runner3_name;
    double runner1_time, runner2_time, runner3_time;
    string firstplace, secondplace, thirdplace;
    cout<<"Input the first and last name of runner 1."<<endl;
    getline(cin, runner1_name);
    cout<<"Enter the amount of time in minutes it took "<<runner1_name<<" to finish a race."<<endl;
    cin>>runner1_time;
    while(runner1_time < 0)
    {
        cout<<"Invalid input, only positive numbers are accepted for the times. Please try again."<<endl;
        cin.ignore();
        cout<<"Enter the amount of time it took "<<runner1_name<<" to finish a race."<<endl;
        cin>>runner1_time;
    }
    cout<<"Input the first and last name of runner 2."<<endl;
    cin.ignore();
    getline(cin, runner2_name);
    cout<<"Enter the amount of time in minutes it took "<<runner2_name<<" to finish a race."<<endl;
    cin>>runner2_time;
    while(runner2_time < 0)
    {
        cout<<"Invalid input, only positive numbers are accepted for the times. Please try again."<<endl;
        cin.ignore();
        cout<<"Enter the amount of time it took "<<runner2_name<<" to finish a race."<<endl;
        cin>>runner2_time;
    }
    cout<<"Input the first and last name of runner 3."<<endl;
    cin.ignore();
    getline(cin, runner3_name);
    cout<<"Enter the amount of time in minutes it took "<<runner3_name<<" to finish a race."<<endl;
    cin>>runner3_time;
    while(runner3_time < 0)
    {
        cout<<"Invalid input, only positive numbers are accepted for the times. Please try again."<<endl;
        cin.ignore();
        cout<<"Enter the amount of time it took "<<runner3_name<<" to finish a race."<<endl;
        cin>>runner3_time;
    }

    if((runner1_time > runner2_time) && (runner1_time > runner3_time))
    {
        firstplace = runner1_name;
    }
    else if((runner1_time > runner2_time) && (runner1_time < runner3_time) || (runner1_time < runner2_time) && (runner1_time > runner3_time))
    {
        secondplace = runner1_name;
    }
    else if((runner1_time < runner2_time) && (runner1_time < runner3_time))
    {
        thirdplace = runner1_name;
    }

    if((runner2_time > runner1_time) && (runner2_time > runner3_time))
    {
        firstplace = runner2_name;
    }
    else if((runner2_time > runner1_time) && (runner2_time < runner3_time) || (runner2_time < runner1_time) && (runner2_time > runner3_time))
    {
        secondplace = runner2_name;
    }
    else if((runner2_time < runner1_time) && (runner2_time < runner3_time))
    {
        thirdplace = runner2_name;
    }

    if((runner3_time > runner1_time) && (runner3_time > runner2_time))
    {
        firstplace = runner3_name;
    }
    else if((runner3_time > runner1_time) && (runner3_time < runner2_time) || (runner3_time < runner1_time) && (runner3_time > runner2_time))
    {
        secondplace = runner3_name;
    }
    else if((runner3_time < runner1_time) && (runner3_time < runner2_time))
    {
        thirdplace = runner3_name;
    }

    cout<<"First place: "<<firstplace<<endl;
    cout<<"Second place: "<<secondplace<<endl;
    cout<<"Third place: "<<thirdplace<<endl;
}
