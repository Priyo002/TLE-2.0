#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define pb push_back
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define endl '\n'
#define sort(X) sort(X.begin(),X.end())
const int mod = 1e9 + 7;
const long long INF = 1e18;

void init() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif
}

int n;
char a[1013][1013];
int dp[1013][1013];

int solve(int i, int j) {
	if (i >= n || j >= n || a[i][j] == '*' )
		return 0;
	if (i == n - 1 && j == n - 1)
		return 1;
	if (dp[i][j] != -1) return dp[i][j];
	return dp[i][j] = (solve(i + 1, j) % mod + solve(i, j + 1) % mod) % mod;
}

int32_t main() {

	init();

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	memset(dp, -1, sizeof dp);
	cout << solve(0, 0);

}