#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define pb push_back
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define endl '\n'
#define sort(X) sort(X.begin(),X.end())
const int mod = 1e9 + 7;
const int INF = 1e18;

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
bool check(int i) {
	if (i == n) return true;
	if (i > n) return false;
	return check(i * 10) || check(i * 20);
}

void solve() {
	cin >> n;
	if (n == 1) {
		cout << "YES" << endl;
		return;
	}
	if (n % 10 != 0) {
		cout << "NO" << endl;
		return;
	}
	if (check(1)) {
		cout << "YES";
	}
	else cout << "NO";
	cout << endl;
}

int32_t main() {

	init();

	int t;
	cin >> t;
	while (t--)
		solve();

}