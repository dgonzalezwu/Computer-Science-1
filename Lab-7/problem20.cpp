#include <iostream>
#include <ctime>

using namespace std;

char ttt_board[3][3] = {{'*','*', '*'},{'*','*', '*'},{'*','*', '*'}};
string player1;
string player2 = "Computer";
int row2, column2;

void show_board()
{
    cout << "     0   1   2";
    cout << endl << endl;
    cout << " 0  " << ttt_board[0][0] << " | " << ttt_board[0][1] << " | " << ttt_board[0][2] << endl;
    cout << "   ___|___|___\n";
    cout << " 1  " << ttt_board[1][0] << " | " << ttt_board[1][1] << " | " << ttt_board[1][2] << endl;
    cout << "   ___|___|___\n";
    cout << " 2  " << ttt_board[2][0] << " | " << ttt_board[2][1] << " | " << ttt_board[2][2] << endl;
    cout << "      |" << "   |" << endl;
}

bool check_results()
{
    //check each row and see if it is fully filled with X or O
    for(int r = 0; r < 3; r++)
    {
        if(ttt_board[r][0] == 'X' && ttt_board[r][1] == 'X'&& ttt_board[r][2] == 'X')
        {
            show_board();
            cout<<player1<<" has won!";
            return true;
        }
        else if(ttt_board[r][0] == 'O' && ttt_board[r][1] == 'O' && ttt_board[r][2] == 'O')
        {
            show_board();
            cout<<player2<<" has won!";
            return true;
        }
    }

    //check each column and see if it is fully filled with X or O.
    for(int c = 0; c < 3; c++)
    {
        if(ttt_board[0][c] == 'X' && ttt_board[1][c] == 'X' && ttt_board[2][c] == 'X')
        {
            show_board();
            cout<<player1<<" has won!";
            return true;
        }
        else if(ttt_board[0][c] == 'O' && ttt_board[1][c] == 'O' && ttt_board[2][c] == 'O')
        {
            show_board();
            cout<<player2<<" has won!";
            return true;
        }
    }
    //check each diagonal and see if it is fully filled with X or O
    if(ttt_board[0][0] == 'X' && ttt_board[1][1] == 'X' && ttt_board[2][2] == 'X')
    {
        show_board();
        cout<<player1<<" has won!";
        return true;
    }
    else if(ttt_board[0][0] == 'O' && ttt_board[1][1] == 'O' && ttt_board[2][2] == 'O')
    {
        show_board();
        cout<<player2<<" has won!";
        return true;
    }
    else if(ttt_board[0][2] == 'X' && ttt_board[1][1] == 'X' && ttt_board[2][0] == 'X')
    {
        show_board();
        cout<<player1<<" has won!";
        return true;
    }
    else if(ttt_board[0][2] == 'O' && ttt_board[1][1] == 'O' && ttt_board[2][0] == 'O')
    {
        show_board();
        cout<<player2<<" has won!";
        return true;
    }
    //if we got here that means all other conditions failed so far so check if board is full for tie case
    //check if board is fully filled
    for (int r = 0; r < 3; r++)
    {
        for(int c = 0; c < 3; c++)
        {
            if(ttt_board[r][c] == '*')
            {
                return false;
            }
        }
    }
    //if we got here that mean board is full
    show_board();
    cout<<"Board is full. "<<player1<<" and "<<player2<<" have reached a tie. There are no winners."<<endl;
    return true;
}

int array_spot_generator()
{
    row2 = (rand() % 3);
    column2 = (rand() % 3);
}

void play_game()
{
    bool stop_playing = false;
    cout<<"Welcome to Tic Tac Toe!"<<endl;
    cout<<"Player, please enter your name."<<endl;
    cin>>player1;
    cout<<player1<<", you are X's. The computer is O's. The first turn will be decided randomly."<<endl;
    //making a random number between 1 and 2
    int first_turn = (rand() % 2) + 1;
    if (first_turn == 1) //player 1 goes first so the human player
    {
        cout<<player1<< " has the first turn."<<endl;
        while(true)
        {
            int row1, column1;
            cout<<player1<<", choose a position by entering the row number [SPACE] then the column number."<<endl;
            show_board();
            cin>>row1>>column1;
            //error checking
            while (ttt_board[row1][column1] == 'X' || ttt_board[row1][column1] == 'O')
            {
                cout<<"That position is already taken. Please try again. Input the open position you want to take by entering the row number [SPACE] then the column number."<<endl;
                cin>>row1>>column1;
            }
            ttt_board[row1][column1] = 'X';
            stop_playing = check_results();
            if(stop_playing == true)
            {
                break;
            }
            //computer randomly chooses a spot
            array_spot_generator();
            //checking to see if that spot is taken and continuing to generate until we find a spot that is free
            while (ttt_board[row2][column2] == 'X' || ttt_board[row2][column2] == 'O')
            {
                array_spot_generator();
            }
            ttt_board[row2][column2] = 'O';
            stop_playing = check_results();
            if(stop_playing == true)
            {
                break;
            }
        }
    }
    if(first_turn == 2) //player 2 goes first so that means the computer
    {
        cout<<player2<< " has the first turn."<<endl;
        while(true)
        {
            //computer randomly chooses a spot
            array_spot_generator();
            //checking to see if that spot is taken and continuing to generate until we find a spot that is free
            while (ttt_board[row2][column2] == 'X' || ttt_board[row2][column2] == 'O')
            {
                array_spot_generator();
            }
            ttt_board[row2][column2] = 'O';
            stop_playing = check_results();
            if(stop_playing == true)
            {
                break;
            }

            int row1, column1;
            cout<<player1<<", choose a position by entering the row number [SPACE] then the column number."<<endl;
            show_board();
            cin>>row1>>column1;
            //error checking
            while (ttt_board[row1][column1] == 'X' || ttt_board[row1][column1] == 'O')
            {
                cout<<"That position is already taken. Please try again. Input the open position you want to take by entering the row number [SPACE] then the column number."<<endl;
                cin>>row1>>column1;
            }
            ttt_board[row1][column1] = 'X';
            stop_playing = check_results();
            if(stop_playing == true)
            {
                break;
            }

        }
    }

}





int main()
{
    //seeding in main so it generates random numbers each time when the functions are called
    srand(time(0));
    play_game();
}