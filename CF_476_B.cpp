#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
typedef long long ll;
int printNcR(int n, int r)
{
 
    // p holds the value of n*(n-1)*(n-2)...,
    // k holds the value of r*(r-1)...
    long long p = 1, k = 1;
 
    // C(n, r) == C(n, n-r),
    // choosing the smaller value
    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
 
            // gcd of p, k
            long long m = __gcd(p, k);
 
            // dividing by gcd, to simplify
            // product division by their gcd
            // saves from the overflow
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
 
        // k should be simplified to 1
        // as C(n, r) is a natural number
        // (denominator should be 1 ) .
    }
 
    else
        p = 1;
 
    // if our approach is correct p = ans and k =1
    return p;
}
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        string str1, str2;
        cin>>str1>>str2;
        int p=0, n=0;
        int qp=0, qn=0;
        int p1=0, n1=0;
        for(int i=0; i<str1.size(); i++)
        {
            if(str2[i]=='?')
            {
                if(str1[i]=='+')
                {
                    qp++;
                }
                else
                {
                    qn++;
                }
            }
            else
            {
                if(str2[i]=='+')
                {
                    p++;
                }
                else
                {
                    n++;
                }
                if(str1[i]=='+')
                {
                    p1++;
                }
                else
                {
                    n1++;
                }
            }
        }   
        cout<<p1<<" "<<n1<<endl;
        cout<<p<<" "<<n<<endl;
        if(p1==p && n1==n)
        {
            if(p+n==str2.size())
            {
                cout<<1<<endl;
            }
            else
            {
            double t=pow(2,qp+qn);
          
            double num=printNcR(qp+qn, qp);
            // cout<<t<<endl;
            // cout<<num<<endl;
            // cout<<setprecision(9)<<num/t<<endl;
             printf("%.12f\n", num/t) ;
            }
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}