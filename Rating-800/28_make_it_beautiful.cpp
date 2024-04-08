#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
    if(a[0]==a[n-1]) cout<<"No"<<endl;
    else{
        cout<<"Yes"<<endl;
        cout<<a[n-1]<<" ";
        for(int i=0;i<n-1;i++)
            cout<<a[i]<<" ";
        cout<<endl;
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