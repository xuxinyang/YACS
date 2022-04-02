#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int n, col, row;
    cin >> n;
    col = 2 * n - 1;
    row = 2 * n + 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i % n == 1)
            {
                cout << "*";
            }
            else
            {
                if (j == 1)
                {
                    cout << "*";
                }
                else if (j == col)
                {
                    cout << " *";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}