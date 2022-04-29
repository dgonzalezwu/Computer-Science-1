#include <iostream>

using namespace std;
int main()
{
    /*
     * Write a c++ program that would convert a decimal number to either binary or hexadecimal.
     * Your program should ask the user for decimal number.
     * Then, it would give the user a choice to either convert decimal number to binary or hexadecimal.
     */
    int binary[128];
    int binaryindex = 0;
    string hexadecimal[128];
    int hexadecimalindex = 0;
    int input;
    int choice;

    cout<<"Please input a decimal number."<<endl;
    cin>>input;
    cout<<"What type of conversion do you want to perform? Please input the number corresponding to"<<endl;
    cout<<"the choice."<<endl;
    cout<<"1. Decimal number to Binary conversion"<<endl;
    cout<<"2. Decimal number to Hexadecimal conversion"<<endl;
    cin>>choice;

    if (choice == 1)
    {
        //BINARY CONVERSION
        do
        {
            //Division by 2 until the /2 answer is 0
            //Storing remainder in array
            binary[binaryindex] = input % 2;
            //Dividing by 2 for next binary digit
            input = input/2;
            //Incrementing array so it can store the next binary value
            binaryindex++;
        }
        while(input != 0);
        //Printing out array in reverse for correct binary conversion
        //Minus 1 on binary index as it increments one more time regardless before while condition is false and breaks
        for(int j = binaryindex - 1; j >= 0; j--)
        {
            cout<<binary[j];
        }
    }

    if (choice == 2)
    {
        //HEXADECIMAL CONVERSION
        do
        {
            //Division by 16 until the /16 answer is 0
            //Storing remainder in array
            int a  = input % 16;
            string b;
            if(a > 9)
            {
                if (a == 10)
                {
                    b = "A";
                    hexadecimal[hexadecimalindex] = b;
                }
                else if (a == 11)
                {
                    b = "B";
                    hexadecimal[hexadecimalindex] = b;
                }
                else if (a == 12)
                {
                    b = "C";
                    hexadecimal[hexadecimalindex] = b;
                }
                else if (a == 13)
                {
                    b = "D";
                    hexadecimal[hexadecimalindex] = b;
                }
                else if(a == 14)
                {
                    b = "E";
                    hexadecimal[hexadecimalindex] = b;
                }
                else if(a == 15)
                {
                    b = "F";
                    hexadecimal[hexadecimalindex] = b;
                }
            }
            else
            {
                b = to_string(a);
                hexadecimal[hexadecimalindex] = b;
            }
            //Dividing by 16 for next binary digit
            input = input/16;
            //Incrementing array so it can store the next binary value
            hexadecimalindex++;
        }
        while(input != 0);
        //Printing out array in reverse for correct binary conversion
        //Minus 1 on binary index as it increments one more time regardless before while condition is false and breaks
        for(int k = hexadecimalindex - 1; k >= 0; k--)
        {
            cout<<hexadecimal[k];
        }
    }
}
