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
        int num;
        cin>>num;
        if(num%2==0)
        {
            cout<<num/2<<" "<<num/2<<endl;
        }
        else if(num%2==1)
        {
            int res=num/2;
            if(res%10==9)
            {
                int res1=res;
                int res2=res+1;
                int temp=res1;
                int temp2=res2;
                int c1=0, c2=0;
                while(res1!=0)
                {
                    c1+=res1%10;
                    res1/=10;
                }
                while(res2!=0)
                {
                    c2+=res2%10;
                    res2/=10;
                }
                int dif=abs(c2-c1);
                temp+=(dif/2+1);
                temp2-=(dif/2+1);
                cout<<temp<<" "<<temp2<<endl;
            }
            else
            {
                cout<<res<<" "<<res+1<<endl;
            }
        }
    }
    return 0;
}