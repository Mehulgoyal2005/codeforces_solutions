#include <iostream>
#include <unordered_set>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;

    // Precompute cubes up to cube root of 1e12 (~10^4)
    unordered_set<ll> cubes;
    for (ll i = 1; i <= 10000; ++i) {
        cubes.insert(i * i * i);
    }

    while (t--) {
        ll x;
        cin >> x;
        bool found = false;
        for (ll a = 1; a * a * a < x; ++a) {
            ll a3 = a * a * a;
            ll b3 = x - a3;
            if (cubes.count(b3)) {
                found = true;
                break;
            }
        }
        cout << (found ? "YES" : "NO") << '\n';
    }

    return 0;
}
