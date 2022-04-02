#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 闰年判断
    int year;
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        cout << "Leap year" << endl;
    }
    else
    {
        cout << "Common year" << endl;
    }
    return 0;
}