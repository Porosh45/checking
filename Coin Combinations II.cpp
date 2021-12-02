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
vector<vector<int>> dp(101,vector<int>(1000001,0));
int x,c[105];
int n;
int main()
{
    cin>>n>>x;
    for(int i = 0;i<n;i++)
        cin>>c[i];
    dp[0][0] = 1;
    for(int i = 1;i<=n;i++)
    {
        for(int j = 0;j<=x;j++)
        {
            dp[i][j] = dp[i-1][j];
            int a = j - c[i - 1];
            if(a>=0)
            {
                dp[i][j] += dp[i][a]%mod;
                dp[i][j]%=mod;
            }
        }
    }
    cout<<dp[n][x]<<endl;
    return 0;
}
