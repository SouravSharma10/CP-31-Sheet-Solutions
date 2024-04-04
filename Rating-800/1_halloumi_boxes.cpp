#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve() {
	ll n,k;
    cin>>n>>k;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    if(k>1){
        cout<<"YES"<<endl;
        return;
    }
    else{
        for(ll i=1;i<n;i++){
            if(a[i]>=a[i-1])
                continue;
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
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