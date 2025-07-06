#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> friends(n);
    for (int i = 0; i < n; i++) {
        cin >> friends[i];
    }

    vector<int> ans(n);  // Fixed size to match n

    for (int i = 0; i < n; i++) {
        ans[friends[i] - 1] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
