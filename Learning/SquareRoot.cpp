#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
float squareRoot(int num)
{
    int start=0;
    int end=num;
    float answer=-1;
    while(start<=end)
    {
        int mid=(start+end)>>1;
        if(mid*mid==num)
        {
            return mid;
        }
        else if(mid*mid>num)
        {
            end=mid-1;
        }
        else
        {
            answer=mid;
            start=mid+1;
        }
    }
    float inc=0.1;
    for(int i=0; i<3; i++)
    {
        while(answer*answer<=num)
        {
            answer+=inc;
        }
        answer=answer-inc;
        inc/=10;
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
        int num;
        cout<<"Enter Number:"<<endl;
        cin>>num;
        cout<<squareRoot(num)<<endl;
    
    }
    return 0;
}