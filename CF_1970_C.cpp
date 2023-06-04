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
        vector<vector<int>> vec(size, (vector<int>(size-1, 0)));
        for(int i=0; i<size; i++)
        {
            for(int j=0; j<size-1; j++)
            {
                cin>>vec[i][j];
            }
        }
        vector<int> ans=vec[0];
        int missing_element=size*(size+1)/2;
        for(int i=0; i<size-1; i++)
        {
            missing_element-=ans[i];
        }
        vector<int> vec1(size+1, 0);
        for(int i=1; i<size; i++)
        {
            for(int j=0; j<size-1; j++)
            {
                if(vec[i][j]==missing_element)
                {
                    if(j==0)
                    {
                        vec1[0]++;
                    }
                    else 
                    {
                        vec1[vec[i][j-1]]++;
                    }
                }
            }
        }
        int ind=-1;
        int m=0;
        for(int i=0; i<size+1; i++)
        {
            if(vec1[i]>m)
            {
                m=vec1[i];
                ind=i;
            }
        }
        int ind1=0;
        if(ind==0)
        {
            ans.insert(ans.begin(), missing_element);
        }
        else 
        {
            for(int i=0; i<size-1; i++)
            {
                if(ans[i]==ind)
                {
                    ind1=i;
                    break;
                }
            }
            ans.insert(ans.begin()+ind1+1 ,missing_element);
        }
        for(int i=0; i<size; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}