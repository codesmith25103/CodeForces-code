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
        double a, b, c, d;
        cin>>a>>b>>c>>d;
        if(a==c && c==d)
        {
            
            cout<<0<<endl;
        }
        else 
        {
            int n1=a, n2=b, n3=c, n4=d;
            double res1, res2;
            res1=a/b;
            res2=c/d;
            if(res1==res2)
            {
               
                cout<<0<<endl;
            }
            else if(ceil(a/b)==floor(a/b) && ceil(c/d)==floor(c/d))
            {
                if(a/b==c/d)
                {
                    
                    cout<<0<<endl;
                }
                else
                {
                    cout<<1<<endl;
                }
            }
            else if(ceil(a/b)==floor(a/b) || ceil(c/d)==floor(c/d))
            {
                cout<<1<<endl;
            }
            else if(n1%n3==0 || n3%n1==0 || n2%n4==0 || n4%n2==0)
            {
                cout<<1<<endl;
            }
            else 
            {
                cout<<2<<endl;
            }
        }
    }
    return 0;
}