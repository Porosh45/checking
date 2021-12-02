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
ll dp[1005][1005];
int n,a[1005][1005];
ll solve(int r , int c)
{
    if(r==n-1 and c==n-1)
        {
            return a[r][c];
        }
    if(r==n or c==n)
        return 0;
    if(dp[r][c]!= -1)
        return dp[r][c];
    if(!a[r][c])
        return 0;
    ll ans = (solve(r + 1 , c) % mod + solve(r , c + 1) %mod);
    return dp[r][c] = ans % mod;
}
int main()
{
    cin>>n;
    memset(dp,-1,sizeof dp);
    memset(a,0,sizeof a);
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            char x;
            cin>>x;
            if(x=='.')
                a[i][j] = 1;
        }
    }
    cout<<solve(0,0)<<endl;
    return 0;
}
