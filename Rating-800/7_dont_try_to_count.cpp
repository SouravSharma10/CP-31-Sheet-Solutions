#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	int n,m;
    cin >> n >> m;
    string x,s;
    cin>>x>>s;
    for (int i = 0; i < 6; ++i) {
        if (x.find(s) != string::npos) {
            cout << i << endl;
            return;
        }
        x += x;
    }
    cout << -1 << endl;
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