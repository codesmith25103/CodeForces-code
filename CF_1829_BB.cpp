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
        vector<int> vec(size);
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
        }
        int m=0;
        int ans=0;
        for(int i=0; i<size; i++)
        {
            if(vec[i]==0)
            {
                m++;
                ans=max(m, ans);
            }
            else
            {
                m=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}