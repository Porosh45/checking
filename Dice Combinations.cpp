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
ll dp[1000006];
ll solve(int n)
{
	if(n==0)
		return 1;
	if(dp[n])
		return dp[n];
	for(int i = 1;i<=6;i++)
	{
		if(n - i>=0)
			dp[n]+=((solve(n - i))%1000000007);
	}
	return dp[n]%1000000007;
}
int main()
{

	int n;
	cin>>n;
	memset(dp,0,sizeof dp);
	cout<<solve(n)<<endl;
	//main();
	return 0;
}
