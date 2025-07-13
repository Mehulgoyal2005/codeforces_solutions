#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int x;

    if (n % 2 == 0) {
        x = n / 2;
    } else {
        x = n / 2 + 1;
    }

    // Now, we need to find the smallest number >= x and <= n that is divisible by m
    // Try all possible moves from x to n
    for (int i = x; i <= n; ++i) {
        if (i % m == 0) {
            cout << i;
            return 0;
        }
    }

    // If we reach here, no valid move count found
    cout << -1;
    return 0;
}
