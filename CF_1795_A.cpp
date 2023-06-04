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
        int size1, size2;
        cin>>size1>>size2;
        string str1, str2;
        cin>>str1>>str2;
        int f1=0, f2=0;
        for(int i=0; i<size1-1; i++)
        {
            if(str1[i]==str1[i+1])
            {
                f1++;
            }
        }
        for(int i=0; i<size2-1; i++)
        {
            if(str2[i]==str2[i+1])
            {
                f2++;
            }
        }
        if(f1>1 || f2>1 || (f1==1 && f2==1))
        {
            cout<<"NO"<<endl;
        }
        else if(f1==0 && f2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(str1[size1-1]==str2[size2-1])
            {
                cout<<"NO"<<endl;
            }
            else 
            {
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}