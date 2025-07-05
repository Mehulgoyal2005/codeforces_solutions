#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
           // even
            for (int j = 0; j < m; ++j)
                cout << "#";
        } else {
            // Even row: alternating patterns
            if ((i-1) % 4 == 0) {
                // Only last character is '#'
                for (int j = 1; j < m; ++j)
                    cout << ".";
                    cout << "#";
            } else if((i-3) % 4 == 0){
                // Only first character is '#'
                cout << "#";
                for (int j = 1; j < m; ++j)
                    cout << ".";
            }
        }
        cout << endl;
    }

    return 0;
}
