#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2)
    {
        int d=abs(y2-y1);
        int x3=x1+d;
        int y3=y1;
        int x4=x1+d;
        int y4=y2;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
        return;
    }
    if(y1==y2)
    {
        int d=abs(x2-x1);
        int y3=y1+d;
        int y4=y1+d;
        int x3=x1;
        int x4=x2;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
        return;
    }
    if(abs(x2-x1)==abs(y2-y1))
    {
        int d1=abs(y2-y1);
        int d2=abs(x2-x1);
        int x3=x1;
        int y3=y2;
        int x4=x2;
        int y4=y1;
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
        return;
    }
    cout<<-1<<endl;
    return;
}
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
       solve();
        
    }
    return 0;
}