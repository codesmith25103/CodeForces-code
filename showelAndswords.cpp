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
        int s, d;
        cin>>s>>d;
        int count=0;
        while((s>0) && (d>0))
        {
            if(s==1 && d==1)
            {
                break;
            }
            if(s<=d)
            {
                d-=2;
                s--;
            }
            else
            {
                s-=2;
                d--;
            }
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}