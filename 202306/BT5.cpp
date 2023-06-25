#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5+5;
int a[maxn], n, ans, t;
int main()
{
    cin >> n >> t;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    int p = 1, q = n;
    while (p <= q)
    {
        if (a[p] + a[q] <= t)
        {
            p++, q--;
            ans ++;
        }
        else
        {
            q--;
            ans ++;
        }
    }
    cout << ans;
    return 0;
}