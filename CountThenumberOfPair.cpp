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
        int k;
        cin>>size>>k;
        string str;
        cin>>str;
        unordered_map<char, int> umap;
        
        for(int i=0; i<size; i++)
        {
            umap[str[i]]++;
        }
        int count=0;
        for(auto &x:umap)
        {
            if(x.first>='a' && x.first<='z')
            {
                if(umap[x.first-32]>0)
                {
                    if(x.second>umap[x.first-32])
                    {
                        count+=umap[x.first-32];
                        x.second=x.second-umap[x.first-32];
                        umap[x.first-32]=0;
                        
                    }
                    else
                    {
                         count+=x.second;
                        umap[x.first-32]=umap[x.first-32]-x.second;
                        x.second=0;
                       
                    }
                }
            }
        }
        // for(auto &x:umap)
        // {
        //     cout<<x.first<<" "<<x.second<<endl;
        // }
        for(auto &x:umap)
        {
            if(x.second>=2)
            {
                int res=x.second/2;
                int rem=min(k, res);
                if(rem==k)
                {
                   
                    count+=k;
                    break;
                }
                else
                {
                    count+=res;
                    k-=res;
                }
                x.second=0;
            }
        }
        cout<<count<<endl;
        // while(k!=0)
        // {
        //     for(auto &x:umap)
        //     {
        //         if(x.second>=2)
        //         {
        //             k--;
        //             count++;
        //             x.second-=2;
        //             continue;
        //         }
        //     }
        // }
        

    }
    return 0;
}