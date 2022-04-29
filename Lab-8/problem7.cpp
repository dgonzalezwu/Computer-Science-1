#include <iostream>
#include <cstring>
#include <string>

using namespace std;


char text[100]; //so you can add in sentinel value \0
void input_text()
{
    string input;
    cout<<"Input a string with a maximum length of 100 characters"<<endl;
    getline(cin, input);
    while(input.length() > 100)
    {
        cout<<"This string is over 100 characters. Please try inputting string of appropriate length again."<<endl;
        getline(cin,input);
    }
    for (int i = 0; i < input.length(); i++)
    {
        text[i] = input[i];
    }
    text[input.length()] = '\0'; //null terminator to end of array

}

int analyze_num_char()
{
    int num_characters = 0; //initialize amount of characters in cstring
    for (int a = 32; a < 126 ; a++)
    {
        char ascii = (char) a;
        for (int b = 0; b < strlen(text); b++)
        {
            if (ascii == text[b])
            {
                num_characters++;
            }
        }
    }
    return num_characters;
}

int analyze_num_letters()
{
    int num_letters = 0; //initialize amount of letters in cstring
    for (int a = 65; a < 123 ; a++)
    {
        char ascii = (char) a;
        for (int b = 0; b < strlen(text); b++)
        {
            if (ascii == text[b])
            {
                num_letters++;
            }
        }
    }
    return num_letters;
}

int analyze_num_digits()
{
    int num_digits = 0; //initialize amount of letters in cstring
    for (int a = 48; a < 58 ; a++)
    {
        char ascii = (char) a;
        for (int b = 0; b < strlen(text); b++)
        {
            if (ascii == text[b])
            {
                num_digits++;
            }
        }
    }
    return num_digits;
}

int analyze_num_spaces()
{
    int num_spaces = 0; //initialize amount of letters in cstring
    char ascii = (char) 32;
    for (int b = 0; b < strlen(text); b++)
    {
        if (ascii == text[b])
        {
            num_spaces++;
        }
    }
    return num_spaces;
}

int analyze_num_punctuation()
{
    int num_punctuation = 0; //initialize amount of letters in cstring
    for (int a = 33; a < 48 ; a++)
    {
        char ascii = (char) a;
        for (int b = 0; b < strlen(text); b++)
        {
            if (ascii == text[b])
            {
                num_punctuation++;
            }
        }
    }
    for (int d = 58; d < 65 ; d++)
    {
        char ascii = (char) d;
        for (int b = 0; b < strlen(text); b++)
        {
            if (ascii == text[b])
            {
                num_punctuation++;
            }
        }
    }
    for (int c = 91; c < 97 ; c++)
    {
        char ascii = (char) c;
        for (int b = 0; b < strlen(text); b++)
        {
            if (ascii == text[b])
            {
                num_punctuation++;
            }
        }
    }
    for (int e = 123; e < 127 ; e++)
    {
        char ascii = (char) e;
        for (int b = 0; b < strlen(text); b++)
        {
            if (ascii == text[b])
            {
                num_punctuation++;
            }
        }
    }
    return num_punctuation;
}




int main() {
    input_text();
    cout << analyze_num_char() << " Characters" << endl;
    cout << analyze_num_letters() << " Letters" << endl;
    cout << analyze_num_digits() << " Digits" << endl;
    cout << analyze_num_spaces() << " Spaces" << endl;
    cout << analyze_num_punctuation() << " Punctuation Marks" << endl;
}