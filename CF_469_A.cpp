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
        int size;
        cin>>size;
        set<int> s1;
        int s;
        cin>>s;
        for(int i=0; i<s; i++)
        {
            int e1;
            cin>>e1;
            s1.insert(e1);
        }
        int s2;
        cin>>s2;
        for(int i=0; i<s2; i++)
        {
            int e1;
            cin>>e1;
            s1.insert(e1);
        }
        if(size==s1.size())
        {
            cout<<"I become the guy."<<endl;
        }
        else
        {
            cout<<"Oh, my keyboard!"<<endl;
        }
    }
    return 0;
}