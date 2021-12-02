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
int a[100005]n,m;
ll dp[100005][105];
ll solve(int pos,int val)
{
	if(pos==n+1)
		return 1;
	if(dp[pos][val]!=-1)
		return dp[pos][val];
	if(a[pos]==0)
	{

	}
}
void test_case()
{
	int n;
	for(int i = 1;i<=n;i++)
		cin>>a[i];
	a[0] = a[1];
	a[n+1] = a[n];
	return;
}
int main()
{ 
	#ifndef ONLINE_JUDGE
	  freopen("/IO/input.txt","r",stdin);
	  freopen("/IO/output.txt","w",stdout);
	  cout<<"Code Started For Checking....."<<endl;
 	#endif
	int t = 1;
	cin>>t;
	while(t--)
	{
		test_case();
	}
	return 0;
}