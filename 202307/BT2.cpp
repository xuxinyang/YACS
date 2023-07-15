#include <bits/stdc++.h>
using namespace std;
long long f[105], a, k, p;
int main()
{
    cin >> a >> k;
    f[1] = 1; f[2] = a;
    if (k >= 1 && k <= a)
    {
        cout << 1;
        return 0;
    }
    p = 2;
    while (f[p] <= k)
    {
        p++;
        f[p] = f[p-1] + f[p-2];
    }
    cout << p-1;
    return 0;
}