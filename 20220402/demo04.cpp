#include <bits/stdc++.h>
using namespace std;
int n, a[500005];
long long sum, low_avg, high_avg, ans_low, ans_high;
double avg; 
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    avg = sum * 1.0 / n;
    low_avg = ceil(avg);
    high_avg = floor(avg);
    // cout << low_avg << " " << high_avg << endl;
    for (int i = 1; i <= n/2; i++)
    {
        ans_low += abs((low_avg - n/2  + i - 1) - a[i]);
    }
    for (int i = n/2 + 1; i <= n; i++)
    {
        ans_low += abs((low_avg + i - n/2 - 1) - a[i]);
    }
    for (int i = 1; i <= n/2; i++)
    {
        ans_high += abs((high_avg - n/2 + i - 1) - a[i]);
    }
    for (int i = n/2 + 1; i <= n; i++)
    {
        ans_high += abs((high_avg + i - n/2 - 1) - a[i]);
    }
    cout << min(ans_low, ans_high) << endl;
    return 0;
}