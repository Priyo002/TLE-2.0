#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define pb push_back
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

int max_digit(int n) {
	string s = to_string(n);
	return *max_element(s.begin(), s.end()) - '0';
}

int32_t main() {

	init();
	int n;
	cin >> n;
	int cnt = 0;
	while (n) {
		n -= max_digit(n);
		cnt++;
	}
	cout <<	cnt;

}