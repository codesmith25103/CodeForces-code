#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        
        ll ans = 0;
        vector<ll> pr(n + 1, 0);
        for (int i = 0; i < n; i++) {
            pr[i + 1] = pr[i] + a[i];
        }
        
        for (int i = 0; i <= k; i++) {
            ans = max(ans, pr[n - (k - i)] - pr[2 * i]);
        }
        
        cout << ans << endl;

    }
    return 0;
}