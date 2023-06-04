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
        int day, m;
        cin>>day>>m;
        int c1=0;
        int count=0;
        while(day!=0)
        {
            day--;
            count++;
            c1++;
            if(m==c1)
            {
                day++;
                c1=0;
            }
            
        }
        cout<<count<<endl;
    }
    return 0;
}