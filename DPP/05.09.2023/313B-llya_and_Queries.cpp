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


string s;
vector<int> arr;
int a, b;
void solve() {
	cin >> a >> b;
	a--, b--;
	if (a == 0) {
		cout << arr[b - 1] << endl;
	}
	else cout << arr[b - 1] - arr[a - 1] << endl;
}

int32_t main() {

	init();

	cin >> s;
	arr.resize(s.size(), 0);
	if (s[0] == s[1]) arr[0] = 1;
	for (int i = 1; i < arr.size() - 1; i++) {
		if (s[i] == s[i + 1]) {
			arr[i] = arr[i - 1] + 1;
		}
		else arr[i] = arr[i - 1];
	}
	arr[arr.size() - 1] = arr[arr.size() - 2];
	int t;
	cin >> t;
	while (t--)
		solve();

}