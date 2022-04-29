#include <iostream>
//Using stream class to both read and write from/to files
#include <fstream>


using namespace std;
int main()
{

    bool menu = true;
    string input;
    fstream myfile;
    while (menu == true)
    {
        cout<<"Please input your choice as a character based on the options below."<<endl;
        cout<<"a. Create a grade file for a class."<<endl;
        cout<<"b. Display the gradebook for a class."<<endl;
        cout<<"c. Calculate averages for class."<<endl;
        cout<<"d. Exit"<<endl;
        cin>>input;
        if (input == "a")
        {
            string filename;
            string file;
            string filetype = ".txt";
            string name;
            string testgrade;
            cout<<"Please input the filename of the grade file."<<endl;
            cin.ignore();
            getline(cin, filename);
            file = filename + filetype;
            //Making a new file based on what the user wants it to be.
            myfile.open(file.c_str(),fstream::out);
            if (myfile.is_open())
            {
                bool writing = true;
                while(writing == true)
                {
                    cout<<"Please input the name of a student. If you are done entering info for the file, please enter 'f'."<<endl;
                    getline(cin, name);
                    if(name == "f")
                    {
                        break;
                    }
                    myfile<<name<<endl;
                    for (int a = 1; a < 5; a++)
                    {
                        cout<<"Please input the student's test "<<a<<" grade."<<endl;
                        getline(cin, testgrade);
                        myfile<<testgrade<<endl;
                    }
                    myfile<<""<<endl;
                }
                myfile.close();
            }
            else
            {
                cout<<"Unable to open file";
                return 0;
            }
        }
        if (input == "b")
        {
            string gradebookname;
            string filetype = ".txt";
            string gradefile;
            string line;
            cout<<"Please input the name of the grade file."<<endl;
            cin.ignore();
            getline(cin, gradebookname);
            gradefile = gradebookname + filetype;
            myfile.open(gradefile.c_str());
            if(myfile.is_open())
            {
                while(getline(myfile, line))
                {
                    cout<<line<<endl;
                }
                myfile.close();
            }
            else
            {
                cout<<"Unable to open file, this file may not exist.";
            }
        }
        if (input == "c")
        {
            string gradefilename;
            string filetype = ".txt";
            string grade_file;
            int a = 0;
            string line;
            string student_name;
            int testgrade1, testgrade2, testgrade3, testgrade4;
            cout<<"Please input the name of the grade file."<<endl;
            cin.ignore();
            getline(cin, gradefilename);
            grade_file = gradefilename + filetype;
            myfile.open(grade_file.c_str());
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
            }
            else
            {
                cout<<"Unable to open file, this file may not exist.";
            }

        }
        if (input == "d")
        {
            menu = false;
        }
    }
}
