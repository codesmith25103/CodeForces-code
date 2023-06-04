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
        vector<int> vec;
        map<int, int> umap;
        for(int i=0; i<size; i++)
        {
            int element;
            cin>>element;
            vec.push_back(element);
            umap[element]++;
        }
        if(umap.size()<3)
        {
            cout<<-1<<" "<<-1<<" "<<-1<<endl;
        }
        else 
        {
            
            vector<int> order;
            for(auto &x:umap)
            {
                order.push_back(x.first);
            }
            vector<int> ans;
            for(int i=0; i<3; i++)
            {
                for(int j=0; j<size; j++)
                {
                    if(vec[j]==order[i])
                    {
                        ans.push_back(j+1);
                        break;
                    }
                }
            }
            for(int i=0; i<3; i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}