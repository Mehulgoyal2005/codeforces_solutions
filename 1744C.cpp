#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;

        // Build extended string for easier wraparound
        s += s;

        vector<int> nextG(2 * n, 0);
        int lastG = -1;

        // Traverse from end to start to precompute next green light
        for (int i = 2 * n - 1; i >= 0; --i) {
            if (s[i] == 'g') lastG = i;
            if (lastG == -1) nextG[i] = 1e9;
            else nextG[i] = lastG - i;
        }

        int res = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] == c) {
                res = max(res, nextG[i]);
            }
        }

        cout << res << '\n';
    }
    return 0;
}
