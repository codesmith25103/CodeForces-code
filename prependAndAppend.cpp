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
        string str;
        cin>>size>>str;
        int count=0;
        int i=0, j=size-1;
        while(i<j)
        {
            if(str[i]=='0')
            {
                if(str[j]=='1')
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            else 
            {
                if(str[j]=='0')
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            i++;
            j--;
        }
        cout<<size-2*count<<endl;
    }
    return 0;
}