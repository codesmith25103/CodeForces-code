#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int firstOccurence(vector<int> vec, int size)
{
    int start=0;
    int end=size-1;
    int answer=-1;
    while(start<=end)
    {
        int mid=(start+end)>>1;
        if(vec[mid]==1)
        {
            answer=mid;
            end=mid-1;
        }
        else if(vec[mid]<1)
        {
            start=mid+1;
        }
        else 
        {
            end=mid-1;
        }
    }
    return answer;
}
int lastOccurence(vector<int> vec, int size)
{
    int start=0;
    int end=size-1;
    int answer=-1;
    while(start<=end)
    {
        int mid=(start+end)>>1;
        if(vec[mid]==1)
        {
            answer=mid;
            start=mid+1;
        }
        else if(vec[mid]<1)
        {
            start=mid+1;
        }
        else 
        {
            end=mid-1;
        }
    }
    return answer;
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
            int element; 
            cin>>element;
            vec.push_back(element);
        }
        sort(vec.begin(), vec.end());s
        int first=firstOccurence(vec, size);
        int last=lastOccurence(vec, size);
        cout<<first<<" "<<last<<endl;
        cout<<"Size:"<<last-first+1<<endl;

    }
    return 0;
}