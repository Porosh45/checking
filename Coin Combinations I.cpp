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
ll dp[1000005],c[105],x;
int n;
ll solve(ll coin)
{
    if(coin==0)
        return 1;
    if(coin<0)
        return 0;
    if(dp[coin]!=-1)
        return dp[coin];
    ll ans = 0;
    for(int i = 0;i<n;i++)
        ans+=(solve(coin - c[i])%mod);
    return dp[coin] = ans%mod;
}
int main()
{
    cin>>n>>x;
    memset(dp,-1,sizeof dp);
    for(int i = 0;i<n;i++)
        cin>>c[i];
    cout<<solve(x)<<endl;
    return 0;
}
