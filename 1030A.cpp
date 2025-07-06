#include <iostream>
using namespace std;

int main() {
    int n, x;
    bool isHard = false;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (x == 1) {
            isHard = true;
        }
    }

    if (isHard)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;

    return 0;
}
