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
        ll a, b;
        cin>>a>>b;
        ll c, d;
        cin>>c>>d;
        int num1=a, num2=c;
        int size1=0;
        int size2=0;
        while(num1!=0)
        {
            num1/=10;
            size1++;
        }
        while(num2!=0)
        {
            num2/=10;
            size2++;
        }
        ll res1=size1+b;
        ll res2=size2+d;
        if(res1>res2)
        {
            cout<<">"<<endl;;
        }
        else if(res1<res2)
        {
            cout<<"<"<<endl;
        }
        else 
        {
            if(size1>size2)
            {
                c=c*pow(10, size1-size2);
            }
            else if(size2>size1)
            {
                a=a*pow(10, size2-size1);
            }
            if(a>c)
            {
                cout<<">"<<endl;
            }
            else if(c>a)
            {
                cout<<"<"<<endl;
            }
            else 
            {
                cout<<"="<<endl;
            }
        }
    }
    return 0;
}