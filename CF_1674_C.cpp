#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    string str1, str2;
    cin>>str1>>str2;
    if(str2.size()==1)
    {
        if(str2[0]=='a')
        {
            cout<<1<<endl;
            return;
        }
    }
    unordered_map<char,int> umap;
    for(int i=0; i<str2.size(); i++)
    {
        umap[str2[i]]++;
    }
    if(umap['a']>=1)
    {
        cout<<-1<<endl;
        return;
    }
    cout<<pow(2, s1.size());
    cout<<endl;
}

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
    cout.sync_with_stdio(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
