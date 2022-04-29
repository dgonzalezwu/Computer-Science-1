#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int userinput;
    string user_input;
    int computerinput;
    string computer_input;
    //Printing out a prompt and having the player choose from the menu of choices
    cout<<"Hello, user. Please choose your option by entering a number between 1 - 3."<<endl;
    cout<<"1. Rock"<<endl;
    cout<<"2. Paper"<<endl;
    cout<<"3. Scissors"<<endl;
    cin>>userinput;
    //A selection structure to set the player's choice to one of the strings: "Rock", "Paper, or "Scissors"
    if(userinput == 1)
    {
        user_input = "Rock";
    }
    else if(userinput == 2)
    {
        user_input = "Paper";
    }
    else if(userinput == 3)
    {
        user_input = "Scissors";
    }
    //Generating a number between 1 -3 using the C++ rand method for the computer's turn of choosing an option
    //Seeding the random number generator appropriately
    srand(time(NULL));
    computerinput = (rand() % 3) + 1;

    if(computerinput == 1)
    {
        computer_input = "Rock";
    }
    else if(computerinput == 2)
    {
        computer_input = "Paper";
    }
    else if(computerinput == 3)
    {
        computer_input = "Scissors";
    }

    //Using a combination of decision structures to decide the winner of the game
    if (userinput == computerinput)
    {
        //Inform the user of the player choices
        cout<<"User has chosen "<<user_input<<" and computer has chosen "<<computer_input<<endl;
        //Telling the user the rule used to decide the winner
        //Telling the user who won (the user or the computer)
        cout<<"User and Computer have chosen the same option. It is a tie."<<endl;
    }
        //User is rock and computer is scissors
    else if(userinput == 1 && computerinput == 3)
    {
        //Inform the user of the player choices
        cout<<"User has chosen "<<user_input<<" and computer has chosen "<<computer_input<<endl;
        //Telling the user the rule used to decide the winner
        cout<<user_input<<" crushes "<<computer_input<<" (Rock wins)"<<endl;
        //Telling the user who won (the user or the computer)
        cout<<"The user has won"<<endl;
    }
        //User is scissors and computer is scissors
    else if(userinput == 3 && computerinput == 1)
    {
        //Inform the user of the player choices
        cout<<"User has chosen "<<user_input<<" and computer has chosen "<<computer_input<<endl;
        //Telling the user the rule used to decide the winner
        cout<<computer_input<<" crushes "<<user_input<<" (Rock wins)"<<endl;
        //Telling the user who won (the user or the computer)
        cout<<"The computer has won"<<endl;
    }
        //User is scissors and computer is paper
    else if(userinput == 3 && computerinput == 2)
    {
        //Inform the user of the player choices
        cout<<"User has chosen "<<user_input<<" and computer has chosen "<<computer_input<<endl;
        //Telling the user the rule used to decide the winner
        cout<<user_input<<" cut "<<computer_input<<" (Scissors wins)"<<endl;
        //Telling the user who won (the user or the computer)
        cout<<"The user has won"<<endl;
    }
        //User is paper and computer is scissors
    else if(userinput == 2 && computerinput == 3)
    {
        //Inform the user of the player choices
        cout<<"User has chosen "<<user_input<<" and computer has chosen "<<computer_input<<endl;
        //Telling the user the rule used to decide the winner
        cout<<computer_input<<" cut "<<user_input<<" (Scissors wins)"<<endl;
        //Telling the user who won (the user or the computer)
        cout<<"The computer has won"<<endl;
    }
        //User is paper and computer is rock
    else if(userinput == 2 && computerinput == 1)
    {
        //Inform the user of the player choices
        cout<<"User has chosen "<<user_input<<" and computer has chosen "<<computer_input<<endl;
        //Telling the user the rule used to decide the winner
        cout<<user_input<<" covers "<<computer_input<<" (Paper wins)"<<endl;
        //Telling the user who won (the user or the computer)
        cout<<"The user has won"<<endl;
    }
        //User is rock and computer is paper
    else if(userinput == 1 && computerinput == 2)
    {
        //Inform the user of the player choices
        cout<<"User has chosen "<<user_input<<" and computer has chosen "<<computer_input<<endl;
        //Telling the user the rule used to decide the winner
        cout<<computer_input<<" covers "<<user_input<<" (Paper wins)"<<endl;
        //Telling the user who won (the user or the computer)
        cout<<"The computer has won"<<endl;
    }
}
