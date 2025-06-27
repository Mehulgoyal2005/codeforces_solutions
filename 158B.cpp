#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> count(5, 0);  // count[1] to count[4]

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        count[x]++;
    }

    int taxis = count[4];  // all groups of 4 need their own taxi

    // Pair group of 3 with group of 1
    int pair31 = min(count[3], count[1]);
    taxis += count[3];  // each group of 3 needs a taxi
    count[1] -= pair31;

    // Pair groups of 2
    taxis += count[2] / 2;
    count[2] %= 2;

    // If one group of 2 remains
    if (count[2] == 1) {
        taxis++;  // it needs a taxi
        count[1] -= min(2, count[1]);  // pair with up to two 1s
    }

    // Remaining 1s go in groups of 4
    if (count[1] > 0) {
        taxis += (count[1] + 3) / 4;
    }

    cout << taxis << endl;
    return 0;
}
