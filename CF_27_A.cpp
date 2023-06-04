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
        vector<int> vec(size);
        int m=0;
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
            m=max(m, vec[i]);
        }
        vector<int> hash(m+1);
        for(int i=0; i<size; i++)
        {
            hash[vec[i]]++;
        }
        int ans=-1;
        for(int i=1; i<m+1; i++)
        {
            if(hash[i]==0)
            {
                ans=i;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}