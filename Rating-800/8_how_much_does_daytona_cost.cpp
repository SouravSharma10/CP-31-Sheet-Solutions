#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	int n,k;
    cin >> n >> k;
    bool flag=false;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a==k){
            flag=true;
        }
    }
    cout<<(flag?"Yes":"NO")<<endl;
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