#include<bits/stdc++.h>
using namespace std;

int t;

int main() {
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int sqrtN = sqrt(n);
        if (sqrtN * sqrtN == n) {
            cout << 0 << " " << sqrtN << '\n';
        }

        else {
            cout << -1 << '\n';
        }
    }

    return 0;
}