#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        string a, b;
        cin >> a >> b;

        // swap first characters
        swap(a[0], b[0]);

        cout << a << " " << b << endl;
    }

    return 0;
}
