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
        int m1=0, m2=0, m3=0;
        for(int i=0; i<size; i++)
        {
            int e1, e2, e3;
            cin>>e1>>e2>>e3;
            m1+=e1;
            m2+=e2;
            m3+=e3;
        }
        
        if(m1==0 && m2==0 && m3==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}