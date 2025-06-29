#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        int even = 0, odd = 0;
        for (int x : a) {
            if (x % 2 == 0) even++;
            else odd++;
        }

        // If both counts are even, we can pair without issue
        if (even % 2 == 0 && odd % 2 == 0) {
            cout << "YES\n";
        } else {
            // Check if any pair differs by 1
            sort(a.begin(), a.end());
            bool found = false;
            for (int i = 1; i < n; ++i) {
                if (a[i] - a[i - 1] == 1) {
                    found = true;
                    break;
                }
            }
            cout << (found ? "YES\n" : "NO\n");
        }
    }
    return 0;
}
