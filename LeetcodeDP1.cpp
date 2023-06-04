#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int getMaximumGenerated(int n) 
    {
        vector<int> vec(n+1, 0);
        vec[0]=0;
        vec[1]=1;
        int m=0;
        for(int i=2; i<n+1; i++)
        {
            if(i%2==0)
            {
                vec[i]=vec[i/2];
            }
            else
            {
                vec[i]=vec[i/2]+vec[i/2+1];
            }
            m=max(vec[i], m);
        }
        for(int i=0 ; i<n+1; i++)
        {
            cout<<vec[i]<<" ";
        }
        cout<<endl;
            
            return m;
    }
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        getMaximumGenerated(7);
    }
    return 0;
}