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
    unordered_map<int, int> umap;
    for(int i=0; i<size; i++)
    {
        if(vec[i]==25)
        {
            umap[vec[i]]++;
        }
        else if(vec[i]==50)
        {
            if(umap[25]==0)
            {
                cout<<"NO"<<endl;
                return;
            }
            else
            {
                umap[50]++;
                umap[25]--;
            }
        }
        else
        {
            if(umap[50]!=0)
            {
                if(umap[25]==0)
                {
                    cout<<"NO"<<endl;
                    return;
                }
                umap[50]--;
                umap[25]--;
            }
            else if(umap[25]>=3)
            {
                umap[25]-=3;
            }
            else
            {
                cout<<"NO"<<endl;
                return;
            }
        }

    }
    cout<<"YES"<<endl;
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