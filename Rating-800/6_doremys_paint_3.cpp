#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	int n;
    cin >> n;
    
    map<int, int> occ;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        occ[num]++;
    }
    
    
    if (occ.size() >= 3) {
        cout << "No" << endl;
    } else {
        auto first = occ.begin();
        auto last = occ.rbegin();
        if (abs(first->second - last->second) <= 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
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