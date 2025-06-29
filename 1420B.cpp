#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to find most significant bit position (0-based)
int msb(int x) {
    return 31 - __builtin_clz(x);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> count(32, 0);  // count[i] = number of elements with MSB at position i

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            int bit = msb(a[i]);
            count[bit]++;
        }

        long long res = 0;
        for (int c : count) {
            if (c >= 2) {
                res += 1LL * c * (c - 1) / 2;
            }
        }

        cout << res << '\n';
    }

    return 0;
}
