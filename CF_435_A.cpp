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
        int bus, size;
        cin>>bus>>size;
        vector<int> vec(bus);
        for(int i=0; i<bus; i++)
        {
            cin>>vec[i];
        }
        int i=0; 
        int count=0;
        while(i<bus)
        {
            int res=size;
            while(res>=vec[i])
            {
                res-=vec[i];
                i++;
                if(i>=bus)
                {
                    break;
                }
            }
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}