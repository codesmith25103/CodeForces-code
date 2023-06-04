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
        int size;
        cin>>size;
        vector<pair<int, int>> vec;
        for(int i=0; i<size; i++)
        {
            int e1, e2;
            cin>>e1>>e2;
            pair<int, int> p1;
            p1.first=e1;
            p1.second=e2;
            vec.push_back(p1);
        }
        int sum1=0, sum2=0;
        for(int i=0; i<size; i++)
        {
            sum1+=vec[i].first;
            sum2+=vec[i].second;
        }
        if
    }
    return 0;
}