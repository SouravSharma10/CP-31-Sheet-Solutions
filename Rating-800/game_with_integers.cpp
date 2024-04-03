#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	ll n;
    cin>>n;
    if(n%3)cout<<"First"<<endl;
    else cout<<"Second"<<endl;
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