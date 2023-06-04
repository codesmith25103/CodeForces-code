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
        string str;
        unordered_map<string, int> umap;
        cin>>str;
        string prev="";
        for(int i=0; i<size-1; i++)
        {
            string str1=str.substr(i, 2);
            
            if(prev==str1)
            {
                prev="";
            }
            else
            {
                prev=str1;
                umap[str1]++;
            }
        }
        int flag=0;
    for(auto &x:umap)
    {
        if(x.second>1)
        {
            flag=1;
            break;
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