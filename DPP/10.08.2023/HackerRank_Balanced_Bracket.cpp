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
	string s;
	cin >> s;
	stack<char> st;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ']') {
			if (st.size() == 0 || st.top() != '[') {
				cout << "NO" ;
				return;
			}
			else {
				st.pop();
			}
		}
		else if (s[i] == '}') {
			if (st.size() == 0 || st.top() != '{') {
				cout << "NO";
				return;
			}
			else {
				st.pop();
			}
		}
		else if (s[i] == ')') {
			if (st.size() == 0 || st.top() != '(') {
				cout << "NO";
				return;
			}
			else {
				st.pop();
			}
		}
		else st.push(s[i]);
	}
	if (st.size() == 0) cout << "YES";
	else cout << "NO";
}

int main() {

	init();

	ll t;
	cin >> t;
	while (t--) {
		solve();
		cout << endl;
	}

}