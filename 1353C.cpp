#include <iostream>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        ll ans = 0;
        // Total layers = (n - 1) / 2
        // For each layer at distance d from center, there are 8 * d cells,
        // and each of those cells takes d moves to center
        for (ll d = 1; d <= n / 2; ++d) {
            ans += 8LL * d * d;
        }

        cout << ans << '\n';
    }
    return 0;
}
