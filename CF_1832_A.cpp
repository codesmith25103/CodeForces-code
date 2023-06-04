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
        string str;
        cin>>str;
        int flag=0;
        unordered_map<char, int> umap;
        for(int i=0; i<str.size(); i++)
        {
            umap[str[i]]++;
        }
        int count_odd=0;
        int pair=0;
        for(auto &x:umap)
        {
            if(x.second>=2)
            {
                pair++;
                if(pair>=2)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}