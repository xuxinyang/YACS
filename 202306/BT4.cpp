#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5+5;
long long ans, n, a[maxn], cnt[maxn], k;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        int p = i;
        while (a[p] == a[i]) p++;
        cnt[++k] = p - i;
        i = p-1;
    }
    for (int i = 1; i <= k; i++)
    {
        ans += (1 + cnt[i]) * cnt[i] / 2; 
    }
    cout << ans;
    return 0;
}