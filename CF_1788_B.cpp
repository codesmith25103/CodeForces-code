#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int get(int num, bool f)
{
    if(num%10==9)
    {
        return get(num/10, !f)*10+4+f;
    }
    else 
    {
        return num/2;
    }
}
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
        else 
        {
            if(num%10!=9)
            {
                cout<<num/2<<" "<<num/2+1<<endl;
            }
            else
            {
                int res=get(num, 1);
                cout<<res<<" "<<num-res<<endl;
            }
        }
    }
    return 0;
}