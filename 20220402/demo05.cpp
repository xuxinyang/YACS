#include <bits/stdc++.h>
using namespace std;
long long n, a[500005], f[500005], g[500005];
long long ans1, ans2;
/**
 * @brief 
 * 给定一个长度为 n 的环状数列 a1,a2,⋯,an,请从这些数字中间挑选出一个独立集，使得独立集中的数字之和达到最大。
 * @return int 
 */
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    f[2] = a[2];
    f[3] = f[1] + a[3];
    g[n - 1] = a[n - 1];
    g[n - 2] = g[n-2] + a[n];
    for (int i = 4; i <= n; i++)
    {
        f[i] = max(f[i-2] + a[i], f[i-1]);
    }
    for (int i = n - 3; i >= 1; i--)
    {
        g[i] = max(g[i+2] + a[i], g[i+1]);
    }
    cout << max(f[n], g[1]) << endl;
    return 0;
}