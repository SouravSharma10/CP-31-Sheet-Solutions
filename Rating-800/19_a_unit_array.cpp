#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int neg_count=0,pos_count=0,ans=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a>0) pos_count++;
        else neg_count++;
    }
    while(!((pos_count>=neg_count) && neg_count%2==0)){
        ans++;
        neg_count--;
        pos_count++;
    }
    cout<<ans<<endl;
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