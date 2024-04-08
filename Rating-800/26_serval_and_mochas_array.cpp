#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b)              { if (b == 0) return a; return gcd(b, a % b); }

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v)  cin>>i;
    for(int i=0; i<n; ++i)
    {
        for(int j=i+1; j<n; ++j)
        {
            if(gcd(v[i],v[j])<=2)
            {
                cout<<"Yes"<<endl;
                return;
            }
        }
    }
    cout<<"No"<<endl;  
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t = 1;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        solve();
    }
}