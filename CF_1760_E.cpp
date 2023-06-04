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
        ll size;
        cin>>size;
        vector<ll> vec(size);
        ll c1=0, c0=0;
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
            if(vec[i]==1)
            {
                c1++;
            }
            else
            {
                c0++;
            }
        }
        vector<ll> vec1=vec;
        vector<ll> vec2=vec;
        ll c11=c1;
        ll c01=c0;
        for(int i=0; i<size; i++)
        {
            if(vec1[i]==0)
            {
                c11++;
                c01--;
                vec1[i]=1;
                break;
            }
        }
        ll res1=0;
        for(int i=0; i<size; i++)
        {
            if(vec1[i]==1)
            {
                res1+=c01;
            }
            else 
            {
                c01--;
            }
        }
        ll res2=0;
        ll c12=c1;
        ll c02=c0;
        for(int i=size-1; i>=0; i--)
        {
            if(vec2[i]==1)
            {
                c12--;
                c02++;
                vec2[i]=0;
                break;
            }
        }
        for(int i=0; i<size; i++)
        {
            if(vec2[i]==1)
            {
                res2+=c02;
            }
            else
            {
                c02--;
            }
        }
        ll res3=0;
        for(int i=0; i<size; i++)
        {
            if(vec[i]==1)
            {
                res3+=c0;
            }
            else
            {
                c0--;
            }
        }
        cout<<max(res1, max(res2, res3))<<endl;
        
    }
    return 0;
}