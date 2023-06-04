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
        int size1,size2;
        cin>>size1>>size2;
        unordered_map<string, string> umap;
        for(int i=0; i<size2; i++)
        {
            string str1, str2;
            cin>>str1>>str2;
            umap[str1]=str2;
        }
        vector<string> vec;
        for(int i=0; i<size1;  i++)
        {
            string str1;
            cin>>str1;
            int s=umap[str1].size();
            int s2=str1.size();
            if(s<s2)
            {
                vec.push_back(umap[str1]);
            }
            else
            {
                vec.push_back(str1);
            }

        }
        for(int i=0; i<size1; i++)
        {
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}