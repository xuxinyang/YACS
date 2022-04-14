#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int MAXN = 5050;

long long n, m, f[MAXN][MAXN][2];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    f[1][0][0] = 1;
    f[1][0][1] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            f[i + 1][j][0] += (f[i][j][0] + f[i][j][1]) % MOD;
            f[i + 1][j][1] += f[i][j][0] % MOD;
            f[i + 1][j + 1][1] += f[i][j][1] % MOD;
        }
    }
    cout << f[n + 1][m][1] % MOD;
    return 0;
}