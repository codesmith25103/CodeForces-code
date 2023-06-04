#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    long long int t = 1;
    cin >> t;
    while (t--)
    {
        long long int size;
        cin>>size;
        vector<long long int> vec(size);
        vector<long long int> ans(size);
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
        }
        ans[0]=vec[0];
        int flag=0;
        for(long long int i=1; i<size; i++)
        {
            long long int res1=ans[i-1]+vec[i];
            long long int res2=ans[i-1]-vec[i];
            if(res2<0)
            {
                ans[i]=res1;
            }
            else if(res1==res2)
            {
                ans[i]=res1;
            }
            else 
            {
                flag=1;
            }
        }
        
        if(flag==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(long long int i=0; i<size; i++)
            {
                cout<<ans[i]<<" ";
            }
        }
            cout<<endl;
    }
    return 0;
}