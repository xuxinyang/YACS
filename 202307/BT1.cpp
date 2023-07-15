#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int p = (k - 1) / m + 1;
    int q = (k % m == 0) ? m: k%m;
    cout << p << " " << q << endl; 
    return 0;
}