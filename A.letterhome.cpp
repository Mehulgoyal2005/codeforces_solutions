#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while ( t--) {
        
		 int n, s;
		 cin >> n >> s;
		 vector<int> x(n);

		for (int i = 0 ; i < n; ++i) {
			cin >>  x[i];
		}

		int left = x[0];
		int right = x[n - 1];

		int steps = (right - left) + min(abs(s - left), abs(s - right));
		cout << steps << '\n';
	}

	return 0;
}
