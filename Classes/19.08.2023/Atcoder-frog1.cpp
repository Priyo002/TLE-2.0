#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define endl '\n'
#define sort(X) sort(X.begin(),X.end())
const int mod = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

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
int arr[100013];

int dp[100013];

int solve(int i) { //What is the minimum cost from i to n
	if (i >= n - 1) //final stone
		return 0;
	// if (i >= n) return INF;
	if (dp[i] != -1)
		return dp[i];
	if (i + 2 >= n)
		return dp[i] = solve(i + 1) + abs(arr[i + 1] - arr[i]);
	return dp[i] = min(solve(i + 1) + abs(arr[i + 1] - arr[i]), solve(i + 2) + abs(arr[i + 2] - arr[i]));

}

int32_t main() {

	init();
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	memset(dp, -1, sizeof dp);
	cout << solve(0) << endl;
}