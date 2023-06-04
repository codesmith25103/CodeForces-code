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
        vector <int> vec(size);
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
        }
        int c=0;
        int c1=1;
        int flag=0;
        for(int i=0; i<size-1; i++)
        {
            if(vec[i]==vec[i+1])
            {
                if(flag==1)
                {
                    c1++;
                }
                else if(flag==0)
                {
                    flag=1;
                    c1++;
                }
            }
            else 
            {
                flag=0;
                c1=1;
                
            }
        }
    }
    return 0;
}