#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count25 = 0, count50 = 0;
    
    for (int i = 0; i < n; i++) {
        int bill;
        cin >> bill;
        
        if (bill == 25) {
            count25++;
        } else if (bill == 50) {
            if (count25 == 0) {
                cout << "NO" << endl;
                return 0;
            }
            count25--;
            count50++;
        } else if (bill == 100) {
            if (count50 > 0 && count25 > 0) {
                count50--;
                count25--;
            } else if (count25 >= 3) {
                count25 -= 3;
            } else {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    
    cout << "YES" << endl;
    return 0;
}
