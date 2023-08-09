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

//Monotonic queue



void solve() {

	int n, k;
	cin >> n >> k;

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i] ;
	}

	multiset<int> st;
	for (int i = 0; i < k; i++) {
		st.insert(a[i]);
	}

	cout << *st.rbegin() << " ";
	for (int i = k; i < n; i++) {
		st.erase(st.find(a[i - k]));
		st.insert(a[i]);
		cout << *st.rbegin() << " ";
	}
	cout << endl;
}

int main() {

	init();

	ll t;
	cin >> t;
	while (t--)
		solve();

}