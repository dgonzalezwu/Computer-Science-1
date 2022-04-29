#include <iostream>

using namespace std;

bool lsms_test(int arr[][3])
{
    //the sum of each column
    int test1 = arr[0][0] + arr[1][0] + arr[2][0];
    int test2 = arr[0][1] + arr[1][1] + arr[2][1];
    int test3 = arr[0][2] + arr[1][2] + arr[2][2];
    //the sum of each row
    int test4 = arr[0][0] + arr[0][1] + arr[0][2];
    int test5 = arr[1][0] + arr[1][1] + arr[1][2];
    int test6 = arr[2][0] + arr[2][1] + arr[2][2];
    //the sum of each diagonal
    int test7 = arr[0][0] + arr[1][1] + arr[2][2];
    int test8 = arr[0][2] + arr[1][1] + arr[2][0];

    if(test1 == test2)
    {
        if(test2 == test3)
        {
            if(test3 == test4)
            {
                if(test4 == test5)
                {
                    if(test5 == test6)
                    {
                        if(test6 == test7)
                        {
                            if(test7 == test8)
                            {
                                return true;
                            }
                        }
                    }
                }
            }
        }
    }
    return false;
}

int main()
{
    int lsms[3][3] = {{4,9,2}, {3,5,7}, {8,1,6}};
    int not_lsms[3][3] = {{9, 8, 2}, {1, 3, 4}, {5, 6, 7}};
    if(lsms_test(lsms) == 1)
    {
        cout<<"Lo Shu Magic Square?: Yes"<<endl;
    }
    else
    {
        cout<<"Lo Shu Magic Square?: False"<<endl;
    }
    if(lsms_test(not_lsms) == 1)
    {
        cout<<"Lo Shu Magic Square?: Yes"<<endl;
    }
    else
    {
        cout<<"Lo Shu Magic Square?: No"<<endl;
    }
}
