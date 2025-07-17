#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        
        set<int> digits;
        int temp = x;
        while (temp > 0) {
            digits.insert(temp % 10);
            temp /= 10;
        }

        // Check smallest y from 0 to 9
        int y = -1;
        for (int i = 0; i <= 9; ++i) {
            if (digits.count(i)) {
                y = i;
                break;
            }
        }

        cout << y << '\n';
    }
    return 0;
}
