#include <iostream>
//Using stream class to both read and write from/to files
#include <fstream>


using namespace std;
int main()
{
    fstream myfile;
    string name;
    string testgrade;
    string filestring;

    //Clearing text file for new input as no overwriting
    ofstream clearfile("lab6question3.txt", std::ios::out | std::ios::trunc);
    clearfile.close();
    //Now opening file using fstream to read and write
    myfile.open("lab6question3.txt");
    //Absolute path version but prefer to use general path for cross compiler use
    //myfile.open("C:\\Users\\danie\\CLionProjects\\Lab6\\lab6question3.txt");

    if(myfile.is_open())
    {
        cout<<"Please input the name of a student."<<endl;
        getline(cin, name);
        myfile<<name<<endl;
        for (int a = 1; a < 5; a++)
        {
            cout<<"Please input the student's test "<<a<<" grade."<<endl;
            getline(cin, testgrade);
            myfile<<testgrade<<endl;
        }
        myfile.close();
        cout<<"Opening created text file and making sure that it works properly: "<<endl;
        myfile.open("lab6question3.txt");
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
