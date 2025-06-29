#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, a, b;
        cin >> x >> y;
        cin >> a >> b;

      
        if (x > y) swap(x, y);

        long long cost;
        if (b > 2 * a) {
            cost = (x + y) * a;
        } else {
            cost = x * b + (y - x) * a;
        }

        cout << cost << '\n';
    }
    return 0;
}
