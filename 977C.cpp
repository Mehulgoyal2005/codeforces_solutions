#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for(int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a.begin(), a.end());

    if(k == 0) {
        if(a[0] == 1) cout << -1 << endl;
        else cout << a[0] - 1 << endl;
    }
    else {
        int x = a[k - 1]; // candidate
        int count = upper_bound(a.begin(), a.end(), x) - a.begin();
        if(count == k)
            cout << x << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
