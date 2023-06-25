#include <bits/stdc++.h>
using namespace std;
char c1[105], c2[105];
int a[105], b[105], c[105];
int main()
{
    cin >> c1 >> c2;
    int l1 = strlen(c1), l2 = strlen(c2);
    int maxl = max(l1, l2);
    for (int i = 0; i < l1; i++) a[i] = c1[l1-i-1]-'0';
    for (int i = 0; i < l2; i++) b[i] = c2[l2-i-1]-'0';
    for (int i = 0; i < maxl; i++)
    {
        c[i] = a[i] ^ b[i];
    }
    int p = maxl;
    while (c[p] == 0 && p > 0) p--;
    for (int i = p; i >= 0; i--) cout << c[i];
    return 0;
}