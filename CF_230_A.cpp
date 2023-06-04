#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int s, n;
    cin>>s>>n;
    vector<pair<int, int>> vec;
    for(int i=0; i<n; i++)
    {
            int e1, e2;
            cin>>e1>>e2;
            pair<int, int> p1={e1, e2};
            vec.push_back(p1);
        }
        sort(vec.begin(), vec.end());
        for(int i=0; i<n ; i++)
        {
            if(s<=vec[i].first)
            {
                cout<<"NO"<<endl;
                return;
            }
            else 
            {
                s+=vec[i].second;
            }
        }
        cout<<"YES"<<endl;
}
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}