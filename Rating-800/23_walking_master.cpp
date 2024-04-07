#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int a,b,c,d;
    cin >> a>>b>>c>>d;
    if(b>d) cout<<-1<<endl;
    else{
        if((a+d-b)<c) cout<<-1<<endl;
        else cout<<(d-b)+(a+d-b)-c<<endl;
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