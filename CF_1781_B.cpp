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
        int count=0;
        int ans=0;
        int flag=0;
        sort(vec.begin(), vec.end());
        if(vec[0]!=0)
        {
            ans++;
        }
        
        for(int i=0; i<size; i++)
        {
            if(vec[i]<=count)
            {
                if(flag==0)
                {
                    flag=1;
                    ans++;
                }
            }
            else 
            {
                flag=0;
            }
            count++;
        }
        cout<<ans<<endl;
    }
    return 0;
}