#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

const int MAXN = 310;

int n, f[MAXN][MAXN];//从i开始，长度为j的子串的答案
string s;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> s;
    n = s.size();
    memset(f, 0x3f, sizeof(f));
    for (int i = 0; i < n; i++) {
        f[i][0] = 0;
        f[i][1] = 1;
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j + i - 1 < n; j++) {
            if ((s[j] == '(' && s[j + i - 1] == ')') || (s[j] == '[' && s[j + i - 1] == ']')) {
                f[j][i] = f[j + 1][i - 2];
            }
            for (int k = 1; k < i; k++) {
                f[j][i] = min(f[j][i], f[j][k] + f[j + k][i - k]);
            }
        }
    }
    cout << f[0][n];

    return 0;
}
