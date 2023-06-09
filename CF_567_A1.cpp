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
        sort(vec.begin(), vec.end());
        for(int i=0; i<size; i++)
        {
            int m1=0, m2=0;
            if(i==0)
            {
                m1=abs(vec[i+1]-vec[i]);
                m2=abs(vec[i]-vec[size-1]);
            }
            else if(i==size-1)
            {
                m1=abs(vec[i]-vec[i-1]);
                m2=abs(vec[i]-vec[0]);
            }
            else
            {
                m1=min(abs(vec[i]-vec[i-1]), abs(vec[i]-vec[i+1]));
                m2=max(abs(vec[i]-vec[0]), abs(vec[i]-vec[size-1]));
            }
            cout<<m1<<" "<<m2<<endl;
            
        }
    }
    return 0;
}