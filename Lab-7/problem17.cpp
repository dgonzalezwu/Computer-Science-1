#include <iostream>

using namespace std;

string names[5];
char letter_grades[5];
double student1_grades[4];
double student2_grades[4];
double student3_grades[4];
double student4_grades[4];
double student5_grades[4];

void input_ng()
{
    //enter each student’s name and his or her four test scores.
    for(int a = 0; a < 5; a++)
    {
        int c = a + 1;
        cout<<"Input student "<<c<<"'s name."<<endl;
        cin>>names[a];
        for (int b = 0; b < 4; b++)
        {
            int d = b + 1;
            if (a == 0)
            {
                cout<<"Input student "<<c<<"'s test "<<d<<" grade."<<endl;
                cin>>student1_grades[b];
                while((student1_grades[b] < 0 )|| student1_grades[b] > 100)
                {
                    cout<<"Invalid input. Not accepting test scores less than 0 or greater than 100. Please try inputting again."<<endl;
                    cin>>student1_grades[b];
                }
            }
            else if (a == 1)
            {
                cout<<"Input student "<<c<<"'s test "<<d<<" grade."<<endl;
                cin>>student2_grades[b];
                while((student2_grades[b] < 0 )|| student2_grades[b] > 100)
                {
                    cout<<"Invalid input. Not accepting test scores less than 0 or greater than 100. Please try inputting again."<<endl;
                    cin>>student2_grades[b];
                }
            }
            else if(a == 2)
            {
                cout<<"Input student "<<c<<"'s test "<<d<<" grade."<<endl;
                cin>>student3_grades[b];
                while((student3_grades[b] < 0 )|| student3_grades[b] > 100)
                {
                    cout<<"Invalid input. Not accepting test scores less than 0 or greater than 100. Please try inputting again."<<endl;
                    cin>>student3_grades[b];
                }
            }
            else if(a == 3)
            {
                cout<<"Input student "<<c<<"'s test "<<d<<" grade."<<endl;
                cin>>student4_grades[b];
                while((student4_grades[b] < 0 )|| student4_grades[b] > 100)
                {
                    cout<<"Invalid input. Not accepting test scores less than 0 or greater than 100. Please try inputting again."<<endl;
                    cin>>student4_grades[b];
                }
            }
            else if(a == 4)
            {
                cout<<"Input student "<<c<<"'s test "<<d<<" grade."<<endl;
                cin>>student5_grades[b];
                while((student5_grades[b] < 0 )|| student5_grades[b] > 100)
                {
                    cout<<"Invalid input. Not accepting test scores less than 0 or greater than 100. Please try inputting again."<<endl;
                    cin>>student5_grades[b];
                }
            }
        }
    }
}

char gradingscale(double number)
{
    char letter_grade = '0';
    if (number >= 90 && number <= 100)
    {
        letter_grade = 'A';
        return letter_grade;
    }
    else if(number >= 80 && number <= 89)
    {
        letter_grade = 'B';
        return letter_grade;
    }
    else if(number >= 70 && number <= 79)
    {
        letter_grade = 'C';
        return letter_grade;
    }
    else if(number >= 60 && number <= 69)
    {
        letter_grade = 'D';
        return letter_grade;
    }
    else if(number >= 0 && number <= 59)
    {
        letter_grade = 'F';
        return letter_grade;
    }
    //reach here if we found no match we means there is an error somewhere as it will give back 0 indicating false
    return letter_grade;
}

void calculate_alg()
{
    //display each student’s average test score and a letter grade based on the average.
    for (int e = 0; e < 5; e ++)
    {
        cout<<names[e]<<"'s average test score and letter grade:"<<endl;
        if (e == 0)
        {
            double sum = 0;
            double mg = student1_grades[0];
            for (int f = 0; f < 4; f++)
            {
                sum += student1_grades[f];
                //comparing the grades each time to find the minimum
                if (mg > student1_grades[f])
                {
                    mg = student1_grades[f];
                }
            }
            //dropping the lowest grade from the sum and only finding the average of the 3 remaining grades
            sum = sum - mg;
            double average = sum/3;
            cout<<average<<endl;
            char lg = gradingscale(average);
            letter_grades[e] = lg;
            cout<<letter_grades[e]<<endl;
        }
        if (e == 1)
        {
            double sum = 0;
            double mg = student2_grades[0];
            for (int f = 0; f < 4; f++)
            {
                sum += student2_grades[f];
                //comparing the grades each time to find the minimum
                if (mg > student2_grades[f])
                {
                    mg = student2_grades[f];
                }
            }
            //dropping the lowest grade from the sum and only finding the average of the 3 remaining grades
            sum = sum - mg;
            double average = sum/3;
            cout<<average<<endl;
            char lg = gradingscale(average);
            letter_grades[e] = lg;
            cout<<letter_grades[e]<<endl;
        }
        if (e == 2)
        {
            double sum = 0;
            double mg = student3_grades[0];
            for (int f = 0; f < 4; f++)
            {
                sum += student3_grades[f];
                //comparing the grades each time to find the minimum
                if (mg > student3_grades[f])
                {
                    mg = student3_grades[f];
                }
            }
            //dropping the lowest grade from the sum and only finding the average of the 3 remaining grades
            sum = sum - mg;
            double average = sum/3;
            cout<<average<<endl;
            char lg = gradingscale(average);
            letter_grades[e] = lg;
            cout<<letter_grades[e]<<endl;
        }
        if (e == 3)
        {
            double sum = 0;
            double mg = student4_grades[0];
            for (int f = 0; f < 4; f++)
            {
                sum += student4_grades[f];
                //comparing the grades each time to find the minimum
                if (mg > student4_grades[f])
                {
                    mg = student4_grades[f];
                }
            }
            //dropping the lowest grade from the sum and only finding the average of the 3 remaining grades
            sum = sum - mg;
            double average = sum/3;
            cout<<average<<endl;
            char lg = gradingscale(average);
            letter_grades[e] = lg;
            cout<<letter_grades[e]<<endl;
        }
        if (e == 4)
        {
            double sum = 0;
            double mg = student5_grades[0];
            for (int f = 0; f < 4; f++)
            {
                sum += student5_grades[f];
                //comparing the grades each time to find the minimum
                if (mg > student5_grades[f])
                {
                    mg = student5_grades[f];
                }
            }
            //dropping the lowest grade from the sum and only finding the average of the 3 remaining grades
            sum = sum - mg;
            double average = sum/3;
            cout<<average<<endl;
            char lg = gradingscale(average);
            letter_grades[e] = lg;
            cout<<letter_grades[e]<<endl;
        }
    }
}

int main()
{
    input_ng();
    calculate_alg();
}
