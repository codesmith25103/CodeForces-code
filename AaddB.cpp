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
        string str;
        cin>>str;
        int num1, num2;
        num1=str[0]-'0';
        num2=str[2]-'0';
        cout<<num1+num2<<endl;
    }
    return 0;
}