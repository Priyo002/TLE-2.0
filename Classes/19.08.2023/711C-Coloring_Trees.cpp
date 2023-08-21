#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define endl '\n'
#define sort(X) sort(X.begin(),X.end())
const int mod = 1e9 + 7;

void init() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif
}

int n, m, k;
int c[113];
int p[113][113];


// 1: solving from i to n
// 2: previous color was pc
// 3: when we need ck segments
int solve(int i, int ck, int pc) {
	if (i == n)
		return (ck == 0) ? 0 : INT_MAX;
	if (c[i] != 0) { //fixed
		return solve(i + 1, ck - (pc != c[i]), c[i]);
	}
	else { //arbitrary
		int mini = LLONG_MAX;
		for (int cc = 1; cc <= m; cc++) {
			c[i] = cc;
			mini = min(mini, solve(i + 1, ck - ))
		}

	}
}

int32_t main() {

	init();

	cin >> n >> m >> k;
	for (int i = 0; i < n; i++) cin >> c[i];

	for (int i = 0; i < n; i++)
		for (int j = 1; j <= m; j++)
			cin >> p[i][j];

	cout << solve(0) << endl;

}