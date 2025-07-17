#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> a(n); // a[0] unused for simplicity

    for (int i = 1; i <= n - 1; ++i) {
        cin >> a[i];
    }

    int pos = 1;
    while (pos < t) {
        pos = pos + a[pos];
    }

    if (pos == t)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
