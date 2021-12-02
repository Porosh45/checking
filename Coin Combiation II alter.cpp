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
vector<vector<int>> dp(101,vector<int>(1000001,-1));
int c[105];
int x;
int n;
ll solve(int pos ,int coin)
{
    if(coin==0)
        return 1;
    if(coin<0)
        return 0;
    if(dp[pos][coin]!=-1)
        return dp[pos][coin];
    ll ans = (solve(pos,coin - c[pos])%mod + solve(pos+1,coin)%mod)%mod;
    return dp[pos][coin] = ans%mod;
}
int main()
{
    cin>>n>>x;
    for(int i = 0;i<n;i++)
        cin>>c[i];
    sort(c,c+n);
    cout<<solve(0,x)<<endl;
    return 0;
}
