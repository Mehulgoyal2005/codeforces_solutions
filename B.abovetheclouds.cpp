#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		string s;
		cin >> n >> s;

		bool ok = false;
		for (int i = 1; i < n - 1; ++i) {
			char b = s[i];
			for (int j = 0; j < i; ++j) {
				if (s[j] == b) {
					ok = true;
					break;
				}
			}
			for (int j = i + 1; j < n && !ok; ++j) {
				if (s[j] == b) {
					ok = true;
					break;
				}
			}
			if (ok) break;
		}

		cout << (ok ? "Yes" : "No") << '\n';
	}

	return 0;
}
