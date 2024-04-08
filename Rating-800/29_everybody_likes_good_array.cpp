#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve()
{
    int n;
    cin >> n;
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int i=1,count=0;
    while(i<n){
        if(((arr[i-1]%2) && (arr[i]%2)) || ((arr[i-1]%2)==0 && (arr[i]%2)==0)){
            arr[i]=arr[i-1]*arr[i];
            count++;
        }
        i++;
    } 
    cout<<(count?count:0)<<endl; 
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