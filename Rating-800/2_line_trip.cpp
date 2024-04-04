#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve() {
	ll n,k;
    cin>>n>>k;
    ll a[n];
    ll score=0,diff=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    a[-1]=0;
    for(ll i=0;i<n;i++){
        diff=abs(a[i]-a[i-1]);
        score=max(score,diff);
    }
    score=max(score,abs(2*k-2*a[n-1]));
    cout<<score<<endl;
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