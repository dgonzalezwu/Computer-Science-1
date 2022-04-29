#include <iostream>
//Using stream class to both read and write from/to files
#include <fstream>


using namespace std;
int main()
{
    fstream myfile;
    string filestring;
    string name;
    int grade = 0;
    //Clearing text file for new input as no overwriting
    ofstream clearfile("lab6question4.txt", std::ios::out | std::ios::trunc);
    clearfile.close();
    //Now opening file using fstream to read and write
    myfile.open("lab6question4.txt");
    //Absolute path version but prefer to use general path for cross compiler use
    //myfile.open("C:\\Users\\danie\\CLionProjects\\Lab6\\lab6question3.txt");

    if(myfile.is_open())
    {
        //Reading in 10 student names and their test test grades and writing these names and grades to a file
        for (int a = 1; a < 11; a++)
        {
            cout<<"Please input the name of student "<<a<<endl;
            getline(cin, name);
            myfile<<name<<endl;
            for(int b = 1; b < 5; b++)
            {
                cout<<"Please input student "<<a<<"'s test "<<b<<" grade."<<endl;
                cin>>grade;
                myfile<<grade<<endl;
            }
            myfile<<""<<endl;
            cin.ignore();
        }
        myfile.close();
        cout<<"Opening created text file and making sure that it works properly: "<<endl;
        myfile.open("lab6question4.txt");
        if(myfile.is_open())
        {
            while(getline(myfile, filestring))
            {
                cout<<filestring<<endl;
            }
        }
        myfile.close();
        return 0;
    }
    else
    {
        cout<<"Unable to open file";
        return 0;
    }
}
