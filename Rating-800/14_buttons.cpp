#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve() {
	ll a,b,c,anna,kettie;
    cin>>a>>b>>c;
    anna=a+(c/2)+c%2;
    kettie=b+(c/2);
    cout<<((anna>kettie)?"First":"Second")<<endl;
    
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