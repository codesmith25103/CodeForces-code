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
        unordered_map<string, int> umap;
        for(int i=0; i<size; i++)
        {
            string str;
            cin>>str;
            if(umap[str]==0)
            {
                cout<<"OK"<<endl;
                umap[str]++;
            }
            else 
            {
                cout<<str<<umap[str]<<endl;
                umap[str]++;
            }
        }
    }
    return 0;
}