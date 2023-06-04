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
        unordered_set<int> s1;
        for(int i=0; i<size; i++)
        {
            int element;
            cin>>element;
            s1.insert(element);
        }
        if(s1.size()==2)
        {
            cout<<size/2+1<<endl;
        }
        else
        {
            cout<<size<<endl;
        }
    }
    return 0;
}