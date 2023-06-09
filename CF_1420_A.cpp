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
        set<int> s1;
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
            s1.insert(vec[i]);
        }
        if(s1.size()==size)
        {
            bool ans=false;
            for(int i=0; i<size-1; i++)
            {
                if(vec[i]<vec[i+1])
                {
                    ans=true;
                    break;
                }
            }
            if(ans)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
    return 0;
}