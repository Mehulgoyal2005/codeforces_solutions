#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    int a[] = {x1, x2, x3};
    sort(a, a + 3);

    int min_distance = a[2] - a[0]; // x3 - x1 after sorting
    cout << min_distance << endl;

    return 0;
}
