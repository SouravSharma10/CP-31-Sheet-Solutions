#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	int n;
    cin >> n;
    int minm=1e5;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        minm=min(abs(a),minm);
    }
    cout<<minm<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll t = 1;
	for (ll i = 0; i < t; i++) {
		solve();
	}
}