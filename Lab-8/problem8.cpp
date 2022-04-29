#include <iostream>
#include <cstring>
#include <string>

using namespace std;

char text[20]; //so you can add in sentinel value \0
void input_text()
{
    string input;
    cout<<"Input a password with a minimum length of 6 characters and a maximum length of 20 characters. It must have at least one uppercase letter, one lowercase letter, and one digit."<<endl;
    getline(cin, input);
    while(input.length() < 6)
    {
        cout<<"This password is under 6 characters. Please try inputting string of appropriate length criteria again."<<endl;
        getline(cin,input);
    }
    while(input.length() > 20)
    {
        cout<<"This password is over 20 characters. Please try inputting string of appropriate length criteria again."<<endl;
        getline(cin,input);
    }
    for (int i = 0; i < input.length(); i++)
    {
        text[i] = input[i];
    }
    text[input.length()] = '\0'; //null terminator to end of array
}

int check_uppercase_amount()
{
    int num_upper = 0; //initialize amount of characters in cstring
    for (int a = 65; a < 91 ; a++)
    {
        char ascii = (char) a;
        for (int b = 0; b < strlen(text); b++)
        {
            if (ascii == text[b])
            {
                num_upper++;
            }
        }
    }
    return num_upper;
}

int check_lowercase_amount()
{
    int num_lower = 0; //initialize amount of characters in cstring
    for (int a = 97; a < 123 ; a++)
    {
        char ascii = (char) a;
        for (int b = 0; b < strlen(text); b++)
        {
            if (ascii == text[b])
            {
                num_lower++;
            }
        }
    }
    return num_lower;
}

int check_digit_amount()
{
    int num_digit = 0; //initialize amount of characters in cstring
    for (int a = 48; a < 58 ; a++)
    {
        char ascii = (char) a;
        for (int b = 0; b < strlen(text); b++)
        {
            if (ascii == text[b])
            {
                num_digit++;
            }
        }
    }
    return num_digit;
}

bool check_pass_criteria()
{
    if(check_uppercase_amount() < 1)
    {
        cout<<"Password does not meet the criteria. It needs 1 or more uppercase letters."<<endl;
        return false;
    }
    else if(check_lowercase_amount() < 1)
    {
        cout<<"Password does not meet the criteria. It needs 1 or more lowercase letters."<<endl;
        return false;
    }
    else if(check_digit_amount() < 1)
    {
        cout<<"Password does not meet the criteria. It needs 1 or more digits."<<endl;
        return false;
    }
    cout<<"Password meets all criteria!"<<endl;
    return true;
}


int main()
{
    input_text();
    check_pass_criteria();
}

