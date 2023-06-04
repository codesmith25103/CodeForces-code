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
        if(size==1)
        {
            cout<<1<<endl;
            cout<<1<<" "<<3<<endl;
            continue;
        }
        if(size%2==0)
        {
            int res=size/2;
            int m=1;
            cout<<res<<endl;
            for(int i=0; i<res; i++)
            {
                cout<<m<<" "<<m+4<<endl;
                m=m+6;
                if(m>3*size)
                {
                    break;
                }
            }
        }
        else 
        {
            int res=size/2;
            res++;
            cout<<res<<endl;
            int m=1;
            for(int i=0; i<res-1; i++)
            {
                cout<<m<<" "<<m+4<<endl;
            }
            cout<<2<<" "<<3*size<<endl;
        }
    }
    return 0;
}