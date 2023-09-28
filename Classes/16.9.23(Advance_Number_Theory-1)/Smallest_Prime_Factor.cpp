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
vector<int> spf;

//Print all prime factors of n
void f(int n) {
	while (n != 1) {
		cout << spf[n] << " ";
		n /= spf[n];
	}
	cout << endl;
}


int32_t main() {

	init();
	clock_t time_req;
	time_req = clock();

	int n;
	cin >> n;
	spf.resize(n + 1);
	iota(spf.begin(), spf.end(), 0);
	for (int i = 2; i * i <= n; i++) {
		if (spf[i] == i) {
			for (int j = i * i; j <= n; j += i) {
				spf[j] = i;
			}
		}
	}
	// for (int i = 1; i <= n; i++) {
	// 	cout << i << " " << spf[i] << endl;
	// }
	f(n);
	time_req = clock() - time_req;
	cout << (float)time_req / CLOCKS_PER_SEC << " Seconds" << endl;
}