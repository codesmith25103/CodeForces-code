#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int gcd(int a, int b)
{
  if (a == 0)
    return b;
  return gcd(b % a, a);
}
 
// Function to find gcd of array of
// numbers
int findGCD(vector<ll> arr, int n)
{
  int result = arr[0];
  for (int i = 1; i < n; i++)
  {
    result = gcd(arr[i], result);
 
    if(result == 1)
    {
    return 1;
    }
  }
  return result;
}
 
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll size;
        cin>>size;
        vector<ll> vec(size);
        for(ll i=0; i<size; i++)
        {
            cin>>vec[i];
        }
        vector<ll> dif;
        ll i=0, j=size-1;
        while(i<=j)
        {
            int res=abs(vec[i]-vec[j]);
            if(res!=0)
            dif.push_back(res);
            i++;
            j--;
        }
        ll ans=INT_MAX;
        if(dif.size()==0)
        {
            cout<<0<<endl;
        }
        else
        {
            for(int x=0; x<dif.size(); x++)
            {
               
                ans=min(ans, dif[x]);
            }
            cout<<findGCD(dif, dif.size())<<endl;
        }
    }
    return 0;
}