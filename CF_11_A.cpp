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
        int size, k;
        cin>>size>>k;
        vector<int> vec(size);
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
        }
        int count=0;
        for(int i=1; i<size; i++)
        {
            int res=vec[i]-vec[i-1];
            if(res<=0)
            {
                int d=abs(res);
                int mul=d/k+1;
                count+=d/k+1;
                vec[i]+=mul*k;
            }
            
        }
        cout<<count<<endl;
    }
    return 0;
}