#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	ll n;
    string s;
    cin>>n>>s;
    int c=0,ans=0,maxc=0;
    for(int i=0;i<n;i++){
        if(s[i]=='.') {c++;maxc=max(c,maxc);}
        else c=0;
    }
    if(maxc>2){
        cout<<2<<endl;
        return;
    }
    c=0;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            ans++;
        }
    }
    cout<<ans<<endl;
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