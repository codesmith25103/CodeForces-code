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
        int size, sub;
        cin>>size>>sub;
        vector<int> vec;
        for(int i=0; i<size; i++)
        {
            int str;
            cin>>str;
            vec.push_back(str);
        }   
        vector<vector<int>> ans;
        for(int )
        set<int> s1;
        for(int i=0; i<size; i++)
        {
            char m='0';
            for(int j=0; j<sub; j++)
            {
                m=max(vec[j][i], m);
            }
            for(int j=0; j<sub; j++)
            {
                if(vec[j][i]==m)
                {
                    s1.insert(i);
                }
            }
        }
        cout<<s1.size()<<endl;
    }
    return 0;
}