#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
    cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int size;
        cin>>size;
        vector<int> vec;
        int element;
        for(int i=0; i<size; i++)
        {
            cin>>element;
            vec.push_back(element);
        }
        int flag=0;
        for(int i=0; i<size-1; i++)
        {
            if(vec[i]!=vec[i+1])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
            for(int i=0; i<size-1; i++)
            {
                if(vec[i]!=vec[i+1])
                {
                    swap(vec[0], vec[i+1]);
                    break;
                }
            }
            int sum=0;
            int j;
            int p=0;
            for(int i=0; i<size-1; i++)
            {
                j=i+1;
                if(p==0)
                {
                    sum+=vec[i];
                }
                if(vec[j]==sum)
                {
                    sum+=vec[j];
                    swap(vec[i], vec[j]);
                    p=1;
                    continue;
                }
                p=0;
            }
            for(int i=0; i<size; i++)
            {
                cout<<vec[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}