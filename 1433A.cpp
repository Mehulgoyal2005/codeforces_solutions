#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string x;
        cin >> x;
        int d = x[0] - '0';
        int len = x.length();
        int result = 10 * (d - 1) + (len * (len + 1)) / 2;
        cout << result << endl;
    }
    return 0;
}
