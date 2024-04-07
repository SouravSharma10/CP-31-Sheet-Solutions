#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    int xor_sum=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        xor_sum ^=a;
    }
    if(n%2)cout<<xor_sum<<endl;
    else{
        if(xor_sum==0) cout<<0<<endl;
        else cout<<-1<<endl;
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