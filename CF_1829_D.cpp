#include <iostream>
#include <vector>
#include <unordered_map>
 
using namespace std;
typedef long long ll;
 
bool solve1(ll n, ll x) {
    if (n == x) {
        return true;
    }
    if (x > n || n % 3 != 0) {
        return false;
    }
    bool ans = solve1(n / 3, x) || solve1(2 * n / 3, x);
    return ans;
}
 
void solve() {
    ll n, m;
    cin >> n >> m;
    if (solve1(n, m)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
 
int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
    cout.sync_with_stdio(0);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}