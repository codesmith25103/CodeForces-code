#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        int size, rank;
        cin>>size>>rank;
        vector<pair<int, int>> vec;
        for(int i=0; i<size; i++)
        {
            int e1, e2;
            cin>>e1>>e2;
            pair<int, int> p1={e1, e2};
            vec.push_back(p1);
        }
        sort(vec.begin(), vec.end());
        int e1=0, e2=0;
        pair<int, int> ans=vec[size-rank-1];
        e1=ans.first;
        e2=ans.second;
        int count=0;
        for(int i=0; i<size; i++)
        {
            if(vec[i].first==e1 && vec[i].second==e2)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}