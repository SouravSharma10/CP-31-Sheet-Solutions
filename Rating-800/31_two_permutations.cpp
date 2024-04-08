#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n,a,b;
    cin >> n>>a>>b;
    if(n==a && n==b) cout<<"Yes"<<endl;
    else if(n-2>=a+b) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;  
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