#include <bits/stdc++.h>
using namespace std;
 
/// Typedef
typedef long long           ll;
typedef pair<int,int>       pii;
typedef pair<ll,ll>         pll;
 
//define
#define pb                  push_back
#define ppb                 pop_back
#define MP                  make_pair
#define ff                  first
#define ss                  second
 
int pr[1003], pg[1003], dp[2][100005];
 
void test_case() {
	int n, x;
	cin >> n >> x;
	for(int i = 0; i < n; i++) cin >> pr[i];
	for(int i = 0; i < n; i++) cin >> pg[i];
	int id = 0,cnt = 0;
	for(int i = 0; i < n; i++) {
		id ^= 1;
		for(int j = 1; j <= x; j++) {
			dp[id][j] = max(dp[id ^ 1][j], dp[id][j]);
			if(j >= pr[i]) dp[id][j] = max(dp[id][j], dp[id ^ 1][j - pr[i]] + pg[i]);
			cnt++;
		}
	}
	cout << dp[id][x] << endl;
}
 
 
int main()
{
    #ifndef ONLINE_JUDGE        
    clock_t tStart = clock();
    freopen("/IO/input.txt", "r", stdin);         
    freopen("/IO/output.txt", "w", stdout);     
    #endif
 
    int t = 1, cs = 0;
    // cin >> t;
    while(t--) {
        // printf("Case %d: ", ++cs);
        test_case();
    }
 
    #ifndef ONLINE_JUDGE        
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);     
    #endif
    return 0; 
}