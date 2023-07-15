#include <iostream>
#include <string>

using namespace std;

string findOriginalString(const string &s, const string &t)
{
    string originalString = s;
    int n = s.length();
    int m = t.length();

    for (int i = n - m; i >= 0; --i)
    {
        bool match = true;
        for (int j = 0; j < m; ++j)
        {
            if (originalString[i + j] != t[j] && originalString[i + j] != '?')
            {
                match = false;
                break;
            }
        }

        if (match)
        {
            for (int j = 0; j < m; ++j)
            {
                originalString[i + j] = t[j];
            }
            break;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if (originalString[i] == '?')
        {
            originalString[i] = 'A';
        }
    }

    return originalString;
}

int main()
{
    string s, t;
    cin >> s >> t;

    string result = findOriginalString(s, t);

    cout << result << endl;

    return 0;
}
