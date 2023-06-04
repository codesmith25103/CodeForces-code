#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int Search(vector<int> vec, int size)
{
    int start=0;
    int end=size-1;
    int dif=(vec[size-1]-vec[0])/size;
    while(start<=end)
    {
        int mid=(start+end)>>1;
        if(vec[])
    }
}
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
        for(int i=0; i<size; i++)
        {
            int elmemnt;
            cin>>element;
            vec.push_back(element);
        }
        sort(vec.begin(), vec.end());

    }
    return 0;
}