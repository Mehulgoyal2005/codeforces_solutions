#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int min_total_digits = 1e9;
    int count_4 = -1, count_7 = -1;

    for (int y = 0; y <= n / 7; ++y) {
        int remaining = n - 7 * y;
        if (remaining % 4 == 0) {
            int x = remaining / 4;
            if (x + y < min_total_digits) {
                min_total_digits = x + y;
                count_4 = x;
                count_7 = y;
            }
        }
    }

    if (count_4 == -1) {
        cout << -1 << endl;
    } else {
        cout << string(count_4, '4') + string(count_7, '7') << endl;
    }

    return 0;
}
