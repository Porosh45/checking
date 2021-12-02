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
#define mod 1000000007
#define all(x)(x.begin(),x.end())
#define debug(x,c) cout<<x<<": "<<c<<" ";
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
int dp[1003][100003],h[1003],s[1003];
void test_case()
{
    int n , x;
    cin>>n>>x;
    for(int i = 0;i<n;i++)
        cin>>h[i];    
    for(int i = 0;i<n;i++)
        cin>>s[i];
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=x;j++)
        {
            if(j>=h[i-1])
                dp[i][j] = max(dp[i - 1][j - h[i-1]] + s[i - 1],dp[i-1][j]);
            else
                dp[i][j] =dp[i-1][j];
        }
    }
    cout<<dp[n][x]<<endl;
    return;
}
int main()
{ 
    #ifndef ONLINE_JUDGE
      freopen("/IO/input.txt","r",stdin);
      freopen("/IO/output.txt","w",stdout);
    #endif
    int t = 1;
    //cin>>t;
    while(t--)
    {
        test_case();
    }
    return 0;
}