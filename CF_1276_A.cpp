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
        vector<int> vec;
        for(int i=0; i<size; i++)
        {
            int element;
            cin>>element;
            vec.push_back(element);
        }
        int e1=vec[0];
        int e2=vec[size-1];
        int answer=0;
        int a3=0;
        for(int i=0; i<size; i++)
        {
            
            if(i==size-1)
            {
                a3=vec[i]-vec[0];
            }
            else 
            {
                a3=vec[i]-vec[i+1];
            }
            answer=max(a3, answer);
        }
        sort(vec.begin(), vec.end());
        int a1=vec[size-1]-e1;
        int a2=e2-vec[0];
        int answer2=max(a1, a2);
        answer=max(answer, answer2);
        
        cout<<answer<<endl;
    }
    return 0;
}