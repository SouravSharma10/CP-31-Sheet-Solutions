#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0, j = n - 1;
    while (i <= j) {
        if (((s[i] == '0') && (s[j] == '1')) || ((s[i] == '1') && (s[j] == '0'))) {
            i++;
            j--;
        }
        else {
            cout << j - i + 1 << endl;
            return;
        }
    }
    cout<<0<<endl;   
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