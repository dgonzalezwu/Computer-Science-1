#include <iostream>

using namespace std;

class Employee
{
private: // Private data can only be accessed by a getter Ç or setter method (Data Hiding)

    string name; //holds the employee’s name
    int idNumber; //holds the employee’s ID number
    string department; //holds the name of the department where the employee works
    string position; // holds the employee’s job title.

public:
    //constructors
    Employee(string name_emp, int id_num, string department_emp, string position_emp)
    {
        name = name_emp;
        idNumber = id_num;
        department = department_emp;
        position = position_emp;
    }

    Employee(string emp_name, int num_id)
    {
        name = emp_name;
        idNumber = num_id;
        department = "";
        position = "";
    }

    Employee() //default constructor
    {
        name = "";
        department = "";
        position = "";
        idNumber = 0;
    }

    //appropriate mutator functions that store values in these member variables
    void setName(string x)
    {
        name = x;
    }

    void setIDnumber(int z)
    {
        idNumber = z;
    }

    void setDepartment(string y)
    {
        department = y;
    }

    void setPosition(string a)
    {
        position = a;
    }

    //appropriate accessor functions that return the values in these member variables
    string getName()
    {
        return name;
    }

    int getIDnumber()
    {
        return idNumber;
    }

    string getDepartment()
    {
        return department;
    }

    string getPosition()
    {
        return position;
    }
};


int main()
{
    Employee employee1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee employee2("Mark Jones", 39119, "IT", "Programmer");
    Employee employee3("Joy Rogers", 81774, "Manufacturing", "Engineer");

    Employee employees[3] = {employee1, employee2, employee3};

    for (int i = 0; i < 3; i++)
    {
        cout<<"Name: "<<employees[i].getName()<<endl;
        cout<<"ID Number: "<<employees[i].getIDnumber()<<endl;
        cout<<"Department: "<<employees[i].getDepartment()<<endl;
        cout<<"Position: "<<employees[i].getPosition()<<endl;
        cout<<""<<endl;
    }
}