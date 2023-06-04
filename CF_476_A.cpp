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
        int size1, size2;
        cin>>size1>>size2;
        int mi=size1;
        int ma=size1/2;
        if(size1%2==1)
        {
            ma++;
        }
    
        for(int i=ma; i<=mi; i++)
        {
            if(i%size2==0)
            {
                cout<<i<<endl;
                return 0;
            }
        }
        cout<<-1<<endl;
        return 0;
    }
    return 0;
}