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
        unordered_map<char, int> umap;
        string str;
        cin>>str;
        for(int i=0; i<str.size(); i++)
        {
            umap[str[i]]++;
        }
        if(umap.size()==4)
        {
            cout<<4<<endl;
        }
        else if(umap.size()==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            int flag=0;
            for(auto &x:umap)
            {
                flag=max(flag, x.second);
            }
            if(flag==2)
            {
                cout<<4<<endl;
            }
            else
            {
                cout<<6<<endl;
            }
        }
    }
    return 0;
}