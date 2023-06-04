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
        vector<int> vec(size);
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
        }
        int count=0;
        if(size%2==0)
        {
            count=size/2-1;
        }
        else 
        {
            count=size/2;
        }
        cout<<count<<endl;
        vector<int> vec1;
        int i=0, j=size-1;
        int flag=0;
        sort(vec.begin(), vec.end());
        while(i<=j)
        {
            if(flag==0)
            {
                vec1.push_back(vec[j]);
                j--;
                flag=1;
            }
            else 
            {
                flag=0;
                vec1.push_back(vec[i]);
                i++;
            }
        }
        for(int x=0; x<size; x++)
        {
            cout<<vec1[x]<<" ";
        }
        cout<<endl;
    }
    return 0;
}