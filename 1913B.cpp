#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int cnt0 = 0, cnt1 = 0;

        for (char c : s) {
            if (c == '0') cnt0++;
            else cnt1++;
        }

        cout << abs(cnt0 - cnt1) << endl;
    }

    return 0;
}
