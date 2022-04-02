#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{
    int row, col;
    char c;
    cin >> row >> col;
    int rain_time[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> c;
            if (c == '.')
            {
                rain_time[i][j] = 0;
            }
            else
            {
                rain_time[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
            if( j >= 1)
            {
                rain_time[i][j] += rain_time[i][j-1];
            }
       }
    }

    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
            cout << rain_time[i][j] << " ";
       }
       cout << endl;
    }
    return 0;
}