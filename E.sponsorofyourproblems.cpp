#include <iostream>
#include <string>
using namespace std;

int count_matches(const string &a, const string &b) {
    int matches = 0;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == b[i]) {
            matches++;
        }
    }
    return matches;
}

int solve(const string &l, const string &r) {
    int n = l.size();
    int first_diff = 0;
    while (first_diff < n && l[first_diff] == r[first_diff]) {
        first_diff++;
    }
    if (first_diff == n) {
        return 2 * n; // l == r, x must be l, so sum is 2n
    }
    // The minimal sum is (number of matching digits before first_diff) * 2
    // plus 0 for the first_diff position (if we choose x's digit different from both)
    // plus (n - first_diff - 1) * 0 (if we choose x's remaining digits different from both)
    return 2 * first_diff;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string l, r;
        cin >> l >> r;
        cout << solve(l, r) << '\n';
    }
    return 0;
}