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
            if(i==0 || vec.back()!=element)
            {
                vec.push_back(element);
            }
        }
        int count=0;
        if(vec.size()==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        for(int i=0; i<vec.size(); i++)
        {
            if(i==0 && vec[i]<vec[i+1])
            {
                count++;
            }
            else if(i==vec.size()-1 && vec[i-1]>vec[i])
            {
                count++;
            }
            else
            {
                if(vec[i+1]>vec[i] && vec[i-1]>vec[i])
                {
                    count++;
                }
            }
        }
        if(count==1)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}