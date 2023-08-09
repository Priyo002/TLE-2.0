#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define vi for(int i=0;i<n;i++)

void solve() {
	int n;
	cin >> n;
	int ans = 0;
	int h = 1;
	vector<int> v;
	while (true) {
		int k = (3 * (h * h) + h) / 2;
		if (k <= n) v.push_back(k);
		else break;
		h++;
	}
	// for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
	// cout << endl;
	// cout << endl;
	while (n >= 2) {
		int i;
		for (i = 0; i < v.size(); i++) {
			if (v[i] == n) {
				cout << ++ans << endl;
				return;
			}
			else if (v[i] > n) {
				break;
			}
		}
		if (i != 0) {
			n -= v[i - 1];
			ans++;
		}
	}
	cout << ans << endl;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--) {
		solve();
	}

}