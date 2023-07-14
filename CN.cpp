vector<long long> countOperations(int n, vector<int> &a, long long x, int q, vector<vector<int>> &queries) {
    // Write your code here.
    vector<long long> ans;
    long long sum=0;
    for(long long i=0; i<a.size(); i++)
    {
        sum+=a[i];
    }
    for(long long i=0; i<q; i++)
    {
        long long c1=queries[i][0];
        long long c2=queries[i][1];
        long long temp=sum;
        temp=(temp-a[c1])+c2;
        long long ans1=temp/x;
        if(temp%x!=0)
        {
            ans1++;
        }
        ans.push_back(ans1);
    }
    return ans;
}
