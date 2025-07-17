#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool solve() {
    int n;
    cin >> n;
    vector<int> p(n), s(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    // Check if p is non-increasing
    for (int i = 1; i < n; ++i) {
        if (p[i] > p[i-1]) {
            return false;
        }
    }

    // Check if s is non-decreasing
    for (int i = 1; i < n; ++i) {
        if (s[i] < s[i-1]) {
            return false;
        }
    }

    // Check if p[n-1] == s[0]
    if (p.back() != s.front()) {
        return false;
    }

    // Compute a[i] = gcd(p[i], s[i])
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        a[i] = __gcd(p[i], s[i]);
    }

    // Verify prefix GCD
    vector<int> prefix_gcd(n);
    prefix_gcd[0] = a[0];
    if (prefix_gcd[0] != p[0]) {
        return false;
    }
    for (int i = 1; i < n; ++i) {
        prefix_gcd[i] = __gcd(prefix_gcd[i-1], a[i]);
        if (prefix_gcd[i] != p[i]) {
            return false;
        }
    }

    // Verify suffix GCD
    vector<int> suffix_gcd(n);
    suffix_gcd[n-1] = a[n-1];
    if (suffix_gcd[n-1] != s[n-1]) {
        return false;
    }
    for (int i = n-2; i >= 0; --i) {
        suffix_gcd[i] = __gcd(suffix_gcd[i+1], a[i]);
        if (suffix_gcd[i] != s[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        if (solve()) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}