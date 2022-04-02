#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(int argc, char **argv)
{
    int x, y, a, b, c, r1, r2, r3;
    cin >> x >> y;
    cin >> a >> b >> c;

    r1 = x*a + y*b;
    r2 = min(x, y)*2*c;
    int temp = x > y ? (x-y)*a : (y-x)*b;
    r2 += temp;
    r3 = max(x, y)*2*c;
    r2 = min(r1, r2);
    r3 = min(r2, r3);
    cout << r3;

    return 0;
}