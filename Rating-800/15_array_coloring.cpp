#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve() {
	ll n,odd_sum=0,even_sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        ll a;
        cin>>a;
        if(a%2) odd_sum+=a;
        else even_sum+=a;
    }
    cout<<(((odd_sum&1)==(even_sum&1))?"YES":"NO")<<endl;
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