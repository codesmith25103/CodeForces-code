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
        int size, k;
		cin>>size>>k;
		vector<int> vec(size), ans(size);
		for(int i=0; i<size; i++)
		{
			cin>>vec[i];
		}
		for(int i=0; i<size; i++)
		{
			int res=(i+k)%size;
			ans[res]=vec[i];
		}
		for(int i=0; i<size; i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
    }
    return 0;
}