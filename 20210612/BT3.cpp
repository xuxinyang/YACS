#include <iostream>
#include <cmath>

using namespace std;
static int ip[35];
int calculate(int start, int end)
{
    int sum = 0, t=0;
    for (int i = end; i >= start; i--)
    {
        sum += ip[i] * pow(2, t);
        ++t;
    }
    return sum;
}

int main(int argc, char **argv)
{
    int a, b, c, d, i=0;
    char e;
    // Change char to number.
    while (i < 32)
    {
        cin >> e;
        ip[i] = e - '0';
        ++ i;
    } 
    // Calculate a, b, c, d.
    a = calculate(0, 7);
    b = calculate(8, 15);
    c = calculate(16, 23);
    d = calculate(24, 31);
    cout << a << "." << b << "." << c << "." << d << endl;
    return 0;
}