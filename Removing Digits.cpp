#include<bits/stdc++.h>
#define ll long long
#define pi acos(-1.0)
#define pb push_back
#define vi vector<int>
#define mapii map<int , int>
#define mapci map<char, int>
#define mapsi map<string,int>
#define FOR(i,n) for(int i = 0;i<n;i++)
#define CP(n) cout<<"Case "<<n<<": "
#define fr freopen("input.txt","r",stdin)
#define fw freopen("output.txt","w",stdout)
#define mod 1000000007
#define all(x)(x.begin(),x.end())
#define debug(x,c) cout<<x<<": "<<c<<" ";
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
int dp[1000005];
int solve(int num)
{
    if(num==0)
    {
        return 0;
    }
    if(num<0)
        return 1e6;
    if(dp[num]!= -1)
        return dp[num];
    int x = num,ans = 1e9;
    while(x)
    {
        int r = x % 10;
        if(r)
            ans = min(ans , 1 + solve(num - (r)));
        x/=10;
    }
    return dp[num] = ans;
}
int main()
{
    memset(dp,-1,sizeof dp);
    int n;
    cin>>n;
    cout<<solve(n)<<endl;
    return 0;
}
