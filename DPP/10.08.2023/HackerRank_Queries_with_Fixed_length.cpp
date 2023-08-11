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
	int n, q;
	cin >> n >> q;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	while (q--) {
		int d;
		cin >> d;
		deque<int> dq;
		vector<int> result;
		for (int i = 0; i < n; i++) {
			while (dq.size() && arr[dq.back()] < arr[i]) {
				dq.pop_back();
			}
			dq.push_back(i);
			while (dq.size() && dq.front() <= i - d) {
				dq.pop_front();
			}
			if (i >= d - 1)
				result.push_back(arr[dq.front()]);
		}
		cout << *min_element(result.begin(), result.end()) << endl;
	}

}

int main() {

	init();

	solve();

}