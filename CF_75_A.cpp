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
        int num1, num2;
        cin>>num1>>num2;
        int sum=num1+num2;
        string str1=to_string(num1);
        string str2=to_string(num2);
        string str5=to_string(sum);
        string str3, str4, str6;
        for(int i=0; i<str1.size(); i++)
        {
            if(str1[i]!='0')
            {
                str3.push_back(str1[i]);
            }
        }
        for(int i=0; i<str2.size(); i++)
        {
            if(str2[i]!='0')
            {
                str4.push_back(str2[i]);
            }
        }
        for(int i=0; i<str5.size(); i++)
        {
            if(str5[i]!='0')
            {
                str6.push_back(str5[i]);
            }
        }
        int num3=stoi(str3);
        int num4=stoi(str4);
        int num5=stoi(str6);
        int sum1=num3+num4;
        if(sum1==num5)
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