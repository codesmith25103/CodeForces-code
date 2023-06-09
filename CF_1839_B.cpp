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
        int size;
        cin>>size;
        vector<pair<int, int>> vec;
        int x=0;
        int ans=0;
        for(int i=0; i<size; i++)
        {
            int e1, e2;
            cin>>e1>>e2;
            pair<int, int> p1={e1, e2};
            // aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuclmgmqfvnbgtapekouga
            vec.push_back(p1);
        }
        sort(vec.begin(), vec.end(), sort1);
        
    }

    return 0;
}