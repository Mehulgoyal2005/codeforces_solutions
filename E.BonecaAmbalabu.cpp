#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<ll> a(n);
        vector<int> bitCount(30, 0);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            for (int b = 0; b < 30; ++b) {
                if (a[i] & (1 << b)) {
                    bitCount[b]++;
                }
            }
        }

        ll maxSum = 0;

        for (int i = 0; i < n; ++i) {
            ll sum = 0;
            for (int b = 0; b < 30; ++b) {
                ll bit = (1 << b);
                if (a[i] & bit) {
                    sum += (n - bitCount[b]) * bit;
                } else {
                    sum += bitCount[b] * bit;
                }
            }
            maxSum = max(maxSum, sum);
        }

        cout << maxSum << '\n';
    }

    return 0;
}
