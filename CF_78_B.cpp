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
        int num;
        cin>>num;
        int i=0, j=6;
        vector<string> vec={"R", "O", "Y", "I", "G", "B", "V"};
        string ans="";
        int flag=0;
        int res=num-3;
        while(res--)
        {
            ans+=vec[i];
            i++;
            if(i==4)
            {
                i=0;
            }
        }
        for(int i=4; i<7; i++)
        {
            ans+=vec[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}