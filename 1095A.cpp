#include <iostream>
using namespace std;

int main() {
    int n;
    string t;
    cin >> n >> t;

    string s = "";
    int i = 0, jump = 1;
    while (i < n) {
        s += t[i];
        i += jump;
        jump++;
    }

    cout << s << endl;
    return 0;
}
