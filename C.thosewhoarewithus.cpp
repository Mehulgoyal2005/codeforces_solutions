#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int max_val = INT_MIN;
		int count_max = 0;

		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				int x;
				cin >> x;
				if (x > max_val) {
					max_val = x;
					count_max = 1;
				} else if (x == max_val) {
					count_max++;
				}
			}
		}

		if (count_max == 1)
			cout << max_val - 1 << '\n';
		else
			cout << max_val << '\n';
	}
	return 0;
}
