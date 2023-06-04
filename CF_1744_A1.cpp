#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{

        int size;
        cin>>size;
        vector<int> vec(size);
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
        }
        string str;
        cin>>str;
        for(int i=0; i<size; i++)
        {
            char x=str[i];
            for(int j=i+1; j<size; j++)
            {
                char y=str[j];
                if(vec[i]==vec[j])
                {
                    if(x!=y)
                    {
                        cout<<"NO"<<endl;
                        return;
                    }
                }
            }
        }
        cout<<"YES"<<endl;
        return;
}
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}