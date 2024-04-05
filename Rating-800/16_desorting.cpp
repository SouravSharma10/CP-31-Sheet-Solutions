#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    int diff = 1e9;
    bool sorted = true;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        if (i > 0)
        {
            diff = min(nums[i] - nums[i - 1], diff);
            sorted &= nums[i] >= nums[i - 1];
        }
    }

    if (!sorted)
    {
        cout << 0 << endl;
        return;
    }

    cout << diff / 2 + 1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        solve();
    }
}