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
        unordered_map<int, int> umap;
        vector<int> vec;
        for(int i=0; i<size; i++)
        {
            int element;
            cin>>element;
            vec.push_back(element);
        }
        int m1=INT_MIN, m2=INT_MAX;
        for(int i=0; i<size; i++)
        {
            umap[vec[i]]++;
        }
        for(int i=0; i<size; i++)
        {
            m1=max(m1, umap[vec[i]]);
            m2=min(m2, umap[vec[i]]);
        }
        cout<<m1-m2<<endl;

    }
    return 0;
}