#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void solve() {
	ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    if(a[0]==a[n-1]){
        cout<<-1<<endl;
        return;
    }
    int it=0;
    while(a[it]==a[0]) it++;
    cout<<it<<' '<<n-it<<endl;
    for(int i=0;i<it;i++) cout<<a[i]<<" ";
    cout<<endl;
    for(int i=it;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
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