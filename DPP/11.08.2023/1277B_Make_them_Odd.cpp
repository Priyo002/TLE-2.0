#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void init() {
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif
}

void solve() {
	int n, a;
	cin >> n;
	map<int, int, greater<int>> mp;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a % 2 == 0) {
			mp[a]++;
		}
	}
	if (mp.size() == 0) {
		cout << 0 << endl;
		return;
	}
	int ans = 0;
	for (auto it : mp) {
		int k = it.first;
		while (k % 2 == 0) {
			k /= 2;
			if (mp.find(k) != mp.end()) mp.erase(k);
			ans++;
		}
	}
	cout << ans << endl;
}

int main() {

	init();

	ll t;
	cin >> t;
	while (t--)
		solve();

}