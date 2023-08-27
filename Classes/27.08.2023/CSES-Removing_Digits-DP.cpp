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


vector<int> dp;
int solve(int n) {

	if (n == 0) return 0;
	if (dp[n] != -1) return dp[n];

	int mini = INF;
	for (auto c : to_string(n)) {
		if (c != '0') {
			mini = min(mini, solve(n - (c - '0')) + 1);
		}
	}
	return dp[n] = mini;

}

int32_t main() {

	init();

	int n; cin >> n;
	dp.clear();
	dp.resize(n + 1, -1);
	cout <<	solve(n);

}