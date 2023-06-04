#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
   string str1, str2;
   cin>>str1>>str2;
   if(str1[0]==str2[0])
   {
      cout<<"YES"<<endl;
      cout<<str1[0]<<"*"<<endl;
      return;
   }
   if(str1[str1.size()-1]==str2[str2.size()-1])
   {
      cout<<"YES"<<endl;
      cout<<"*"<<str1[str1.size()-1]<<endl;
      return;
   }
   unordered_map<string, int> umap;
   string answer="";
   int flag=0;
   for(int i=0; i<str1.size()-1; i++)
   {
      string ans=str1.substr(i, 2);
      umap[ans]++;
   }
   for(int i=0; i<str2.size()-1; i++)
   {
      string ans=str2.substr(i, 2);
      if(umap[ans]>=1)
      {
         flag=1;
         answer=ans;
         cout<<"YES"<<endl;
         cout<<"*"<<ans<<"*"<<endl;
         return;
      }
   }
   cout<<"NO"<<endl;
   return;
}
int main()
{
   cin.tie(0);cin.sync_with_stdio(0);
   cout.tie(0);cout.sync_with_stdio(0);
   int t = 1;
   cin >> t;
   while (t--)
   {
     solve();
   }
   return 0;
}