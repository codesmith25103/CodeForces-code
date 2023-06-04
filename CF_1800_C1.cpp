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
        long long int size;
        cin>>size;
        priority_queue<long long int> pq;
        long long int sum=0;
        for(int i=0; i<size; i++)
        {
            long long int element;
            cin>>element;
            
            if(element!=0)
            {
                pq.push(element);
            }
            else 
            {
                if(!pq.empty())
                {
                    sum+=pq.top();
                    pq.pop();
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}