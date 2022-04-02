#include <bits/stdc++.h>
using namespace std;
string s;
stack<char> st;
int main()
{
    cin >> s;
    int n = s.size();
    // 求删除多少个括号才能构成合法的括号
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
    }
    cout << st.size() << endl;
    return 0;
}