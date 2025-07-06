#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    int max_height = -1, min_height = 101;
    int max_index = 0, min_index = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];

        if (a[i] > max_height) {
            max_height = a[i];
            max_index = i;
        }

        // For min, we want the **last occurrence** to be closer to the end
        if (a[i] <= min_height) {
            min_height = a[i];
            min_index = i;
        }
    }

    int swaps = max_index + (n - 1 - min_index);
    if (max_index > min_index) swaps -= 1;

    cout << swaps << endl;

    return 0;
}
