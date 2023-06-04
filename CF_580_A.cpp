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
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
        }

        // if(size==1)
        // {
        //     cout<<0<<endl;
        //     return 0;
        // }
        int count=0;
        int res=vec[0];
        int m=1;
        count++;
        for(int i=1; i<size; i++)
        {
            // cout<<"NUM"<<" "<<vec[i]<<endl;
            // cout<<"RES"<<" "<<res<<endl;
            if(res<=vec[i])
            {
                count++;
                m=max(count, m);
                // cout<<count<<endl;
                res=vec[i];
                
            }
            else
            {
                count=1;
                // cout<<count<<endl;
                res=vec[i];
            }
        }
        cout<<m<<endl;
    }
    return 0;
}