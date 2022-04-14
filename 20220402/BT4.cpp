#include <bits/stdc++.h>
using namespace std;
long long n, ans, a[500005];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] += 1e9 - i;
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
    {
        ans += abs(a[i] - a[(n+1)/2]);
    }
    cout << ans;
    return 0;
}