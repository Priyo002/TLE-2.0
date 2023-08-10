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

	int n;
	cin >> n;
	vector<int> v(n);
	int mini = INT_MAX;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		mini = min(mini, v[i]);
	}
	if (n == 1) {
		cout << "NO";
		return;
	}
	sort(v.begin(), v.end());
	int idx = upper_bound(v.begin(), v.end(), mini) - v.begin();
	if (idx < n) cout << v[idx];
	else cout << "NO";

}

int main() {

	init();

	solve();

}