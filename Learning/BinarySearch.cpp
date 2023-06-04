#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int Bsearch(vector<int> vec, int key)
{
    int low=0;
    int end=vec.size()-1;
    int answer=-1;
    while(low<=end)
    {
        int mid=(low+end)/2;
        if(vec[mid]==key)
        {
            return mid;
        }
        else if(vec[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return -1;
}
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        vector<int> vec;
        int size;
        cout<<"enter size:"<<endl;
        cin>>size;
        for(int i=0; i<size; i++)
        {
            int element;
            cin>>element;
            vec.push_back(element);
        }
        sort(vec.begin(), vec.end());
        int key;
        cout<<"Enter Key"<<endl;
        cin>>key;
        int index=Bsearch(vec, key);
        cout<<"Element is present at index:"<<index<<endl;
    }
    return 0;
}