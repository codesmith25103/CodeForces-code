#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> slicing(vector<int>& arr,
                    int X, int Y)
{
 
    // Starting and Ending iterators
    auto start = arr.begin() + X-1;
    auto end = arr.begin() + Y ;
 
    // To store the sliced vector
    vector<int> result(Y - X + 1);
 
    // Copy vector using copy function()
    copy(start, end, result.begin());
 
    // Return the final sliced vector
    return result;
}
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
        vector<int> vec1(size), vec2(size);
        for(int i=0; i<size; i++)
        {
            cin>>vec1[i];
        }
        for(int i=0; i<size; i++)
        {
            cin>>vec2[i];
        }
        int l=0, m=0;
        int ans1=0, ans2=0;
        int res=0;
        int flag=0;
        for(int i=0; i<=size-1; i++)
        {
            if(i!=size-1 && vec2[i]<=vec2[i+1])
            {
                if(flag==0)
                {
                    flag=1;
                    l=i+1;
                    m=i+1;
                }
                else 
                {
                    m=i+1;
                }
            }
            else
            {
                if(flag==1)
                {
                flag=0;
                m=i+1;
                int dif=m-l;
                if(dif>=res)
                {
                    if(slicing(vec1, l,m)!=slicing(vec2, l, m))
                    {
                        ans1=l;
                        ans2=m;
                        res=m-l;
                    }
                }
                l=0;
                m=0;
                }
            }
        }
        cout<<ans1<<" "<<ans2<<endl;
    }
    return 0;
}