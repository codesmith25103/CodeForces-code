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
        int size;
        cin>>size;
        int even=0, odd=0;
        for(int i=0; i<size; i++)
        {
            int element;
            cin>>element;
            if(element%2==0)
            {
                even+=element;
            }
            else
            {
                odd+=element;
            }
        }
        if(even>odd)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}