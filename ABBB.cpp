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
        string str1="AB";
        string str2="BB";
        int temp=str.size();
        for(int i=0; i<temp;)
        {
            string s=str.substr(i, 2);
            if(s==str1 || s==str2)
            {
                str.erase(i, 2);
                if(i>0)
                {
                    i--;
                }
            }
            else 
            {
                i++;
            }
            temp=str.size();

        }
        cout<<str.size()<<endl;
    }
    return 0;
}