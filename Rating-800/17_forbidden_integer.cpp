#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    if (x != 1)
    {
        cout << "YES" << endl;
        cout << n << endl;
        for (int i = 0; i < n; i++)
            cout << 1 << " ";
        cout << endl;
        return;
    }
    else if (k == 1 || (k == 2 && n % 2 == 1))
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
        cout << n / 2 << endl;
        cout << ((n % 2 == 1) ? 3 : 2) << " ";
        for (int i = 0; i < (n / 2) - 1; i++)
            cout << 2 << " ";
        cout << endl;
    }
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