#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    if(a[0]==1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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