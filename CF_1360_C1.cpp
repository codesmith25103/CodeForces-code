#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int size;
    cin>>size;
    vector<int> vec(size);
    for(int i=0; i<size; i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(), vec.end());
    unordered_map<int, int> umap;
    for(int i=0; i<size; i++)
    {
        umap[vec[i]%2]++;
    }
    int odd=umap[0];
    int even=umap[1];
    if(odd%2==0 && even%2==0)
    {
        cout<<"YES"<<endl;
        return;
    }
    if(odd%2==1 && even%2==1)
    {
        for(int i=1; i<size; i++)
        {
            if(vec[i]-vec[i-1]==1)
            {
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
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