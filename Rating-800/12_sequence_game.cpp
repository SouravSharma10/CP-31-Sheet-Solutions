#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve() {
	ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
        cin>>a[i];
    vector<ll> ans;
    ans.push_back(a[0]);
    for(ll i=1;i<n;i++){
        if(a[i]>=a[i-1]){
            ans.push_back(a[i]);
        }
        else{
             ans.push_back(a[i]);
              ans.push_back(a[i]);
        }
    }
    cout<<ans.size()<<endl;
    for(auto i:ans)
        cout<<i<<" ";
    cout<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll t = 1;
	cin >> t;
	for (ll i = 0; i < t; i++) {
		solve();
	}
}