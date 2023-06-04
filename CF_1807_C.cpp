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
        string vec;
        cin>>vec;
        int flag=0;
        for(int i=0; i<size; i++)
        {
            int flag1=0;
            if(vec[i]=='0')
            {
                continue;
            }
            for(int j=i+1; j<size; j++)
            {
                if(vec[i]==vec[j])
                {
                    int res=j-i;
                    if(res%2==0)
                    {
                        continue;
                    }
                    else
                    {
                        flag1=1;
                        break;
                    }

                }
            }
            if(flag1==1)
            {
                flag=1;
                break;
            }
            
        }
        if(flag==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}