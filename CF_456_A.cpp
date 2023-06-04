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
        int size;
        cin>>size;
        for(int i=0; i<size; i++)
        {
            int e1, e2;
            cin>>e1>>e2;
            if(e2<e1)
            {
                cout<<"Happy Alex";
                return 0;
            }
        }
        cout<<"Poor Alex";
        return 0;
    }
    return 0;
}