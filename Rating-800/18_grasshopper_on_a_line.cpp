#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;
    if(n%k!=0){
        cout<<1<<endl;
        cout<<n<<endl;
    }
    else{
        cout<<2<<endl;
        cout<<1<<" "<<n-1<<endl;
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