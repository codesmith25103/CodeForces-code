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
        string str;
        cin>>str;
        int q;
        cin>>q;
        vector<int> vec(str.size()+1);
        vec[0]=0;
        for(int i=1; i<str.size(); i++)
        {
            if(str[i-1]==str[i])
            {
                vec[i]=vec[i-1]+1;
            }
            else
            {
                vec[i]=vec[i-1];
            }
            // cout<<vec[i]<<" ";
        }
        cout<<endl;
        for(int i=0; i<q; i++)
        {
            int l, r;
            cin>>l>>r;
            cout<<vec[r-1]-vec[l-1]<<endl;
        }
    }
    return 0;
}