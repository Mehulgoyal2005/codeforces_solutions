#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int computeMedian(const vector<int>& sub) {
    vector<int> temp = sub;
    sort(temp.begin(), temp.end());
    int k = temp.size();
    return temp[(k + 1) / 2 ];
}

int computeMin(const vector<int>& sub) {
    return *min_element(sub.begin(), sub.end());
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int max_diff = INT_MIN;
        for (int l = 0; l < n; ++l) {
            vector<int> sub;
            for (int r = l; r < n; ++r) {
                sub.push_back(a[r]);
                int med = computeMedian(sub);
                int min_val = computeMin(sub);
                int diff = med - min_val;
                if (diff > max_diff) {
                    max_diff = diff;
                }
            }
        }
        cout << max_diff << '\n';
    }

    return 0;
}