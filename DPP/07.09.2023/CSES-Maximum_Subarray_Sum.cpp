#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb emplace_back
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

void solve() {
	int n, a;
	cin >> n;
	int sum = 0, ans = INT_MIN, maxi = INT_MIN;
	bool pos = false;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a > 0) pos = true;
		sum += a;
		if (sum < 0) sum = 0;
		ans = max(ans, sum);
		maxi = max(maxi, a);
	}
	if (!pos) cout << maxi;
	else
		cout << ans;
}

int32_t main() {

	init();

	solve();

}