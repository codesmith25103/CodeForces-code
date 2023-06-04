#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int size;
        cin>>size;
        vector<int> vec(size);
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
        }
        int res1=-1;
        int res2=-1;
        vector<int> vec1=vec;
        sort(vec1.begin(), vec1.end());
        // cout<<"Vec"<<endl;
        // for(int i=0; i<size; i++)
        // {
        //     cout<<vec[i]<<" ";
        // }
        // cout<<endl<<"Vec1"<<endl;
        // for(int i=0; i<size; i++)
        // {
        //     cout<<vec1[i]<<" ";
        // }
        // cout<<endl;
        for(int i=0; i<size; i++)
        {
            // cout<<vec[i]<<" "<<vec1[i]<<endl;
            if(res1==-1 && vec1[i]!=vec[i])
            {
                // cout<<i<<endl;
                res1=i+1;
            }
            if(res1!=-1 && vec1[i]==vec[i])
            {
                // cout<<i<<endl;
                res2=i;
            }
        }
        // c
        vector<int> vec2;
        // for(int i=res1-1; i<res2-1; i++)
        // {
        //     vec2.push_back(vec[i]);
        // }
        // for(int i=0; i<vec2.size(); i++)
        // {
        //     cout<<vec2[i]<<" ";
        // }
        cout<<endl;
        vector<int> vec3=vec2;
        sort(vec3.begin(), vec3.end());
        reverse(vec2.begin(), vec2.end());
        // for(int i=0; i<vec2.size(); i++)
        // {
        //     cout<<vec2[i]<<" ";
        // }
        cout<<endl;
        for(int i=0; i<vec3.size(); i++)
        {
            if(vec3[i]!=vec2[i])
            {
                cout<<"no"<<endl;
                return;
            }
        }
        if(res1==-1)
        {
            cout<<"yes"<<endl;
            cout<<1<<" "<<1<<endl;
            return;
        }
        cout<<"yes"<<endl;
        cout<<res1<<" "<<res2<<endl;
        return;
}
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        solve();

    }
    return 0;
}