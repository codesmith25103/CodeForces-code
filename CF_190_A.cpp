#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int child, men;
        cin>>men>>child;
        {
            if(men==0 && child!=0)
            {
                cout<<"Impossible"<<endl;
                return;
            }
            if(child==0)
            {
                cout<<men<<" "<<men<<endl;
                return;
            }
            if(men==child)
            {
                cout<<men<<" "<<men+child-1<<endl;
                return;
            }
            if(men>child)
            {
                cout<<men<<" "<<men+child-1<<endl;
                return;
            }
            if(child>men)
            {
                cout<<men+(child-men)<<" "<<men+child-1<<endl;
            }
        }
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