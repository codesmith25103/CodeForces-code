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
        int size, k;
        cin>>size>>k;
        vector<int> vec(size);
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
        }
        int count=0;
        for(int i=0; i<size; i++)
        {
            int res=vec[i];
            int ind=res-1;
            int dif=abs(i-ind);
            if(dif%k==0)
            {
                continue;
            }
            else
            {
                count++;
            }
        }
        // cout<<"Here:"<<count<<endl;
        if(count==0)
        {
            cout<<0<<endl;
        }
        else if(count==2)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}