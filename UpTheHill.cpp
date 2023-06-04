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
        long long int up, down;
        cin>>up>>down;
        long long  int res=up+down+1;
            for(long long int j=1; j<=up; j++)
            {
                cout<<j<<" ";
            }
            cout<<res<<" ";
            long long int count=0;
            for(long long int j=res-1; j>0; j--)
            {
                if(count>=down)
                {
                    break;
                }
                cout<<j<<" ";
                count++;
                if(count>=down)
                {
                    break;
                }
            }
    }
    return 0;
}