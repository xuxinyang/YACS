#include <algorithm>
#include <iostream>
#include <vector>
#define ll long long
using namespace std;

ll s = 0, k, n = 1, p = 1;

ll factorial(ll n) {
    ll result = 1;
    for (ll i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// 获取第k个全排列
vector<ll> getPermutation(ll n, ll k)
{
    vector<ll> nums(n);
    for (ll i = 0; i < n; ++i)
    {
        nums[i] = i + 1;
    }

    vector<ll> permutation;
    --k;

    for (ll i = n; i >= 1; --i) {
        ll index = k / factorial(i - 1);
        permutation.push_back(nums[index]);
        nums.erase(nums.begin() + index);
        k %= factorial(i - 1);
    }
    return permutation;

}

int main()
{
    cin >> k;
    while (k > s + n)
    {
        s += n;
        p++;
        n *= p;
    }
    vector<ll> permutation = getPermutation(p, k- s);

    for (ll num : permutation)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
