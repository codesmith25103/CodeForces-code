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
        ll n, m, h;
        cin>>n>>m>>h;
        vector<ll> pre(m);
        ll rank=1;
        ll p=0, time=0;
        vector<ll> vec1(m);
        ll pen1=0;
        for(ll i=0; i<m; i++)
        {
            cin>>vec1[i];
        }
       
        
        sort(vec1.begin(), vec1.end());
        ll j=0;
        pre[0]=vec1[0];
        for(int i=1; i<m; i++)
        {
            pre[i]=pre[i-1]+vec1[i];
        }
        while(j<m && time+vec1[j]<=h)
        {
            p++;
            time+=vec1[j]; 
            // pen1=vec1[j]+2*pen1;
            j++;
        }
      
        for(int i=0; i<p; i++)
        {
            pen1+=pre[i];
        }
        //   cout<<p<<" "<<pen1<<endl;
        for(ll i=1; i<n; i++)
        {
            ll p2=0, time2=0, pen2=0;
            vector<ll> vec2(m);
            vector<ll> pre2(m);
           
            for(ll i=0; i<m; i++)
            {
                cin>>vec2[i];
            }
            sort(vec2.begin(), vec2.end());
             pre2[0]=vec2[0];
             for(int q=1; q<m; q++)
             {
                pre2[q]=pre2[q-1]+vec2[q];
             }
            ll j2=0;
            while(j2<m && time2+vec2[j2]<=h)
            {
                p2++;
                time2+=vec2[j2]; 
                // pen2=vec2[j2]+2*pen2;
                j2++;
            }
            pen2=0;
            for(int q=0; q<p2; q++)
            {
                pen2+=pre2[q];
            }
            // cout<<p2<<" "<<pen2<<endl;
            if(p2>p)
            {
                rank++;
            }
            if(p2==p)
            {
                if(pen2<pen1)
                {
                    rank++;
                }
            }
        }
        cout<<rank<<endl;
    }
    return 0;
}