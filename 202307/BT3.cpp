#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5+5;
int n, x, a[maxn];
int gcd(int a, int b)
{
    if (a % b == 0) return b;
    else return (gcd(b, a%b));
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        a[i] = abs(x);
    }
    int k = a[1];
    for (int i = 2; i <= n; i++)
    {
        k = gcd(k, a[i]);
    }
    cout << k;
    return 0;
}