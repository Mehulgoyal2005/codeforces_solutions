#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 0, y = 0, z = 0;

    while (n--) {
        int xi, yi, zi;
        cin >> xi >> yi >> zi;
        x += xi;
        y += yi;
        z += zi;
    }

    if (x == 0 && y == 0 && z == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
