#include <iostream>
//Using stream class to both read and write from/to files
#include <fstream>


using namespace std;
int main()
{
    fstream myfile;
    string line;
    string student_name;
    double testgrade1, testgrade2, testgrade3, testgrade4;
    int a = 0;

    //Now opening file using fstream to read and write
    myfile.open("lab6question4.txt");

    if(myfile.is_open())
    {
        while(getline(myfile, line))
        {
            //Iterates in intervals of 6 so 0-5
            if (a == 0)
            {
                student_name = line;
                cout<<student_name<<endl;
            }
            if (a == 1)
            {
                testgrade1 = stod(line);
            }
            if(a == 2)
            {
                testgrade2 = stod(line);
            }
            if(a == 3)
            {
                testgrade3 = stod(line);
            }
            if(a == 4)
            {
                testgrade4 = stod(line);
                double sum = testgrade1 + testgrade2 + testgrade3 + testgrade4;
                double average = sum/4;
                cout<<"Average: "<<average<<endl;
            }
            if(a == 5)
            {
                //resetting the counter variable here to -1 as it will automatically incremement which throws the line count off
                a = -1;
                cout<<""<<endl;
            }
            a++;
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
