#include <bits/stdc++.h>
using namespace std;
const string s1 = ":-)", s2 = ":-(";
int cnt1, cnt2;
int main()
{
    string s;
    while (cin >> s)
    {
        if (s == s1) cnt1++;
        else if (s == s2) cnt2++;
    }
    cout << cnt1 - cnt2;
    return 0;
}