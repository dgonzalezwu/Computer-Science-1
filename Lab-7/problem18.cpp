#include <iostream>

using namespace std;

//since we can use any data type we wish to use, I will be using the integer data type for the 2-D arrays

int getTotal(int arr[][3], int rows)
{
    int total = 0;

    for (int a = 0; a < 3; a++)
    {
        for(int b = 0; b < rows; b++)
        {
            total += arr[b][a];
        }
    }
    return total;
}

double getAverage(int arr[][3], int rows)
{
    int sections = 3 * rows; //total number of entries in the array
    int sum = getTotal(arr, rows); //calling previous function to get the sum of all entries
    double average = (double) sum/sections;
    return average;
}

int getRowTotal(int arr[][3], int row) //2-D array, subscript of the row we want in the array
{
    int row_total = 0;
    for (int c = 0; c < 3; c++)
    {
        row_total += arr[row][c];
    }

    return row_total;
}

int getColumnTotal(int arr[][3], int column, int rows) //2-D array, subscript of the column we want in the array
{
    int column_total = 0;
    //calculating number of rows
    for (int d = 0; d < rows; d++)
    {
        column_total += arr[d][column];
    }

    return column_total;
}

int getHighestInRow(int arr[][3], int row) //2-D array, subscript of the row we want in the array
{
    int highest_row_value = arr[row][0]; //making highest value initially first value in row
    for (int e = 0; e < 3; e++)
    {
        if(arr[row][e] > highest_row_value)
        {
            highest_row_value = arr[row][e];
        }
    }
    return highest_row_value;
}

int getLowestInRow(int arr[][3], int row) //2-D array, subscript of the row we want in the array
{
    int lowest_row_value = arr[row][0]; //making lowest value initially the first one in the row
    for (int f = 0; f < 3; f++)
    {
        if (arr[row][f] < lowest_row_value)
        {
            lowest_row_value = arr[row][f];
        }
    }

    return lowest_row_value;
}





int main()
{
    //will be using arrays that consistently have 3 columns but the rows can vary for these functions
    int test[2][3] = {{20, 19, 48},{24, 31, 7}};
    cout<<"Total Sum of Array Values: "<<getTotal(test, 2)<<endl;
    cout<<"Average of Array Values: "<<getAverage(test, 2)<<endl;
    cout<<"Row 1 Total Sum of Values: "<<getRowTotal(test, 0)<<endl;
    cout<<"Column 1 Total Sum of Values: "<<getColumnTotal(test, 0, 2)<<endl;
    cout<<"Highest Value in Row 1: "<<getHighestInRow(test, 0)<<endl;
    cout<<"Lowest Value in Row 1: "<<getLowestInRow(test, 0)<<endl;
}
