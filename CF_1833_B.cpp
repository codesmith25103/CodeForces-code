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
        int size, k;
        cin>>size>>k;
        vector<int> a(size);
        vector<int> b(size);
        for(int i=0; i<size; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<size; i++)
        {
            cin>>b[i];
        }
        vector<pair<int, int>> vec;
        for(int i=0; i<size; i++)
        {
            pair<int, int> p1={a[i], i};
            vec.push_back(p1);
        }
        sort(vec.begin(), vec.end());
        sort(b.begin(), b.end());
        vector<int> ans(size);
        for(int i=0; i<size; i++)
        {
            ans[vec[i].second]=b[i];
        }
        for(int i=0; i<size; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}