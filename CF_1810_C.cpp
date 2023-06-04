#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n, c, d;
        cin >> n >> c >> d;
		vector<ll> a;
		set<ll> s;
		for (ll i = 0; i < n ; i++)
        {
            ll x;
			cin >> x;
			s.insert(x);
		}
		for (auto &x : s)
        {
			a.push_back(x);
		}
 
		ll i = 1;
		ll ans = c * n + d;
		for (auto itn : a)
        {
			ll t = c * (n-i) + d * (itn - i);
            i++;
			ans = min(ans, t);
		}
		cout<<ans<<"\n";
	}
    
    return 0;
}