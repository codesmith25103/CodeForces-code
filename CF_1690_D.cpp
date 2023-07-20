#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int size, k;
    cin>>size>>k;
    string vec;
    cin>>vec;
    unordered_map<char, int> umap;
    for(int i=0; i<k; i++)
    {
        umap[vec[i]]++;
    }
    int m=umap['W'];
    int win=k;
    int i=0;
    while(win<size)
    {
        umap[vec[i]]--;
        umap[vec[win]]++;
        i++;
        win++;
        m=min(m, umap['W']);
    }
    cout<<m<<endl;
    return;
}
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        
        solve();
    }
    return 0;
}