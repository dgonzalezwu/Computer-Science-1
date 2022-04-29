#include <iostream>

using namespace std;

char ttt_board[3][3] = {{'*','*', '*'},{'*','*', '*'},{'*','*', '*'}};
string player1;
string player2;

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

void play_game()
{
    bool stop_playing = false;
    cout<<"Welcome to Tic Tac Toe!"<<endl;
    cout<<"Player 1, please enter your name."<<endl;
    cin>>player1;
    cout<<"Player 2, please enter your name."<<endl;
    cin>>player2;
    cout<<player1<<", you are X's. You will also have the first turn."<<endl;
    cout<<player2<<", you are O's."<<endl;
    while(true)
    {
        int row1, column1, row2, column2;
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
        cout<<player2<<", choose a position by entering the row number [SPACE] then the column number."<<endl;
        show_board();
        cin>>row2>>column2;
        while (ttt_board[row2][column2] == 'X' || ttt_board[row2][column2] == 'O')
        {
            cout<<"That position is already taken. Please try again. Input the open position you want to take by entering the row number [SPACE] then the column number."<<endl;
            cin>>row2>>column2;
        }
        ttt_board[row2][column2] = 'O';
        stop_playing = check_results();
        if(stop_playing == true)
        {
            break;
        }
    }
}





int main()
{
    play_game();
}
