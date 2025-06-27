#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x;
    int row, col;

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> x;
            if (x == 1) {
                row = i;
                col = j;
            }
        }
    }

    // Manhattan distance to center (2,2) in 0-based indexing
    cout << abs(row - 2) + abs(col - 2) << endl;

    return 0;
}
