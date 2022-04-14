#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 200005;
ll n, c, d, x[MAXN], a[MAXN], p, ans;
priority_queue<ll> q;

int main()
{
    cin >> n >> c >> d;
    for (int i = 1; i <= n; i++)
        cin >> x[i] >> a[i];
    p = 1;
    while (1)
    {
        if (c >= d) break;
        while (p <= n && x[p] <= c)
        {
            q.push(a[p]);
            p++;
        }
        if (q.empty())
        {
            ans = -1;
            break;
        }
        c += q.top();
        q.pop();
        ans++;
    }
    if (ans < 0) cout << "Impossible";
    else cout << ans;
    return 0;
}