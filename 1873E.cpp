#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

bool canFill(const vector<int>& a, int n, ll h, ll x) {
    ll water = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] < h)
            water += h - a[i];
        if (water > x) return false;
    }
    return water <= x;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        ll x;
        cin >> n >> x;
        vector<int> a(n);
        int maxH = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            maxH = max(maxH, a[i]);
        }

        ll low = 1, high = x + maxH, ans = 1;
        while (low <= high) {
            ll mid = (low + high) / 2;
            if (canFill(a, n, mid, x)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
