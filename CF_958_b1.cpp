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
        unordered_map<int, int> umap;
        int size;
        cin>>size;
        size--;
        for(int i=0; i<2*size; i++)
        {
            int element;
            cin>>element;
            umap[element]++;
        }
        int count=0;
        for(auto &x:umap)
        {
            if(x.second==1)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}