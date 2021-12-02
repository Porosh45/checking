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
#define MAX 1000007
#define all(x)(x.begin(),x.end())
#define debug(x,c) cout<<x<<": "<<c<<" ";
#define fast_io ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
int c[105];
int dp[1000005],x,n;
int main()
{
	cin>>n>>x;
	FOR(i,n)cin>>c[i];
	sort(c,c+n);
	for(int i = 0;i<=x;i++)
		dp[i] = INT_MAX;
	dp[0] = 0;
	for(int j = 1;j<=x;j++)
	{
		for(int i = 0;i<n;i++)
		{
			if(c[i]<=j)
			{
				int s = dp[j - c[i]];
				if(s != INT_MAX && s+1<dp[j])
					dp[j] = s+1;
			}
		}
	}
	cout<<((dp[x]!=INT_MAX)?dp[x]:-1)<<endl;
}
