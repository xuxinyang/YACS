#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int a[100005], b[100005], c[100005], l, r, mid, m=1;
int cnt;
int main(int argc, char **argv)
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }

    sort(a+1, a+1+n);
    for (int i = 1; i <= n; i++)
    {
        l = 1; r = n;
        while (l <= r)
        {
            mid = (l+r) / 2;
            if (a[mid] == b[i])
            {
                c[k] == a[mid];
                k++;
                break;
            }
            else if (a[mid] < b[i])
            {
                r = mid-1;
            }
            else
            {
                l = mid + 1;
            }
        }
    }

    sort(c+1, c+1+m);
    if (m != 0)
    {
        cout << m << endl;
        for (int i = 1; i <= m; i++)
        {
            cout << c[i] << " ";
        }
    }
    else
    {
        cout << 0 << endl;;
    }

    return 0;
}