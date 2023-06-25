#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int arr[100];

bool judge_palindrome(int start, int end)
{
    int i;
    if (end-start == 0)
        return true;
    for (int i = start; i <= end/2; i++)
    {
        if (arr[i] != arr[end-i])
            break;
    } 
    return (i == end/2);
}

void change_x_to_array(int x, int base)
{
    int i = 1;
    while (x > 0)
    {
        int b = x % base;
        x = x / base;
        arr[i] = b;
        i ++;
    }
}

int main(int argc, char **argv)
{
    int x;
    cin >> x;
    change_x_to_array(x, 10);
    if (judge_palindrome(1, x/10+1))
    {
        cout << "Yes" << endl;
        for (int i = 2; i <= 16; i++)
        {
            change_x_to_array(x, i);
            if (judge_palindrome(1, x/i+1))
            {
                cout << i << " ";
            }
        }
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}