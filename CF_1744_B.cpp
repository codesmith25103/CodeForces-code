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
        long long  size, k;
        cin>>size>>k;
        vector<int> vec(size);
        long long sumeven=0, sumodd=0, sizeeven=0, sizeodd=0;
        for(int i=0; i<size; i++)
        {
            cin>>vec[i];
            
        }
        for(int i=0; i<size; i++)
        {
            if(vec[i]%2==0)
            {
                sizeeven++;
                sumeven+=vec[i];
            }
             if(vec[i]%2==1)
            {
                sizeodd++;
                sumodd+=vec[i];
            }
        }
        while(k--)
        {
            long long q, x;
            cin>>q>>x;
            if(q==0)
            {
                sumeven=sumeven+(x*sizeeven);
                if(x%2==1)
                {
                    sumodd+=sumeven;
                    sizeodd=sizeodd+sizeeven;
                    sizeeven=0;
                    sumeven=0;
                }
            }
            else
            {
                sumodd=sumodd+(x*sizeodd);
                if(x%2==1)
                {
                    sumeven+=sumodd;
                    sizeeven=sizeodd+sizeeven;
                    sizeodd=0;
                    sumodd=0;
                }
            }
            cout<<sumeven+sumodd<<endl;
        }

    }
    return 0;
}