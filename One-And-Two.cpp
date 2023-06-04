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
        int count_2=0;
        int size=0;
        cin>>size;
        vector<int> vec;
        for(int i=0; i<size; i++)
        {
            int element;
            cin>>element;
            vec.push_back(element);
        }
        for(int i=0; i<size; i++)
        {
            if(vec[i]==2)
            {
                count_2++;
            }
        }
        if(count_2==0)
        {
            cout<<1<<endl;
        }
        else if(count_2%2==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            int count=0;
            int mid_2=count_2/2;
            int flag=0;
            int c=0;
            for(int i=0; i<size; i++)
            {
                c++;
                if(vec[i]==2)
                {
                    count++;
                    if(count==mid_2)
                    {
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==1)
            {
                cout<<c<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}