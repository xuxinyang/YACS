#include <bits/stdc++.h>
using namespace std;
const int maxn = 5e5+5;
long long n, a[maxn], sum[maxn], ans;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum[i] = sum[i-1] + a[i];
    }
    ans = a[2] - a[1];
    for (int i = 3; i <= n; i++)
    {
        ans = ans - (i-1)*a[i] + sum[i-1];
    }
    cout << ans;
    return 0;
}