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
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int t;
	cin >> t;
	while (t--) {
		int l;
		cin >> l;
		int k = lower_bound(v.begin(), v.end(), l) - v.begin();
		if (v[k] == l) {
			cout << "Yes " << ++k << endl;
		}
		else cout << "No " << ++k << endl;
	}
}

int main() {

	solve();

}