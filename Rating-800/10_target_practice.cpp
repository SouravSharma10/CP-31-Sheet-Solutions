#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            char x;
            cin >> x;
            if (x == 'X')
            {
                if ((i == 1) || (j == 1) || (i == 10) || (j == 10))
                {
                    sum += 1;
                }
                else if ((i == 2) || (j == 2) || (i == 9) || (j == 9))
                {
                    sum += 2;
                }
                else if ((i == 3) || (j == 3) || (i == 8) || (j == 8))
                {
                    sum += 3;
                }
                else if ((i == 4) || (j == 4) || (i == 7) || (j == 7))
                {
                    sum += 4;
                }
                else
                {
                    sum += 5;
                }
            }
        }
    }
    cout << sum << endl;
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