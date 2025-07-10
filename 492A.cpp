#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int level = 1, used = 0;

    while (true) {
        int cubes = level * (level + 1) / 2;
        if (used + cubes > n)
            break;
        used += cubes;
        level++;
    }

    cout << level - 1 << endl;
    return 0;
}
