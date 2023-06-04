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
        set<int> s1;
        int size;
        cin>>size;
        for(int i=0; i<size; i++)
        {
            int element;
            cin>>element;
            s1.insert(element);
        }
        set<int> :: iterator itr;
        set<int> :: iterator itr2;
        itr=s1.end();
        for(itr=s1.end(); itr!=s1.begin(); itr--)
        {
            for(itr2=s1.begin(); itr2!=itr; itr2++)
            {
                int num=*itr2;
                int res=*itr-num;
                s1.insert(res);
            }
        }
        cout<<s1.size()<<endl;
    }
    return 0;
}