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
        vector<int> vec(size);
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
        }
        int point=vec[0];
        string str;
        str.push_back('1');
        int el=-1;
        int flag=0;
        for(int i=1; i<size; i++)
        {
            if(vec[i]>=point && flag==0)
            {
                str.push_back('1');
                point =vec[i];
            }
            else
            {
                if(vec[i]<=vec[0] && vec[i]>=el)
                {
                    el=vec[i];
                    str.push_back('1');
                    flag=1;
                }
                else
                {
                    str.push_back('0');
                }

            }
        }
        cout<<str<<endl;
    }
    return 0;
}