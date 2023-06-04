#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    unordered_map<char, int> umap;
    string str="codeforces";
    for(int i=0; i<str.size(); i++)
    {
        umap[str[i]]++;
    }
    while (t--)
    {
        char check;
        cin>>check;
        if(umap[check]>0)
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