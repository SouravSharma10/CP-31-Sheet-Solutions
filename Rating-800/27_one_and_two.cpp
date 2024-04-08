#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int sum=0,curr_sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i]==2;
    }
    for(int i=0;i<n;i++){
        curr_sum+=a[i]==2;
        if(curr_sum==sum-curr_sum){
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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