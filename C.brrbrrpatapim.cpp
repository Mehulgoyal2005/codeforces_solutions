#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> G(n, vector<int>(n));
        vector<int> p(2 * n, -1);  

       
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cin >> G[i][j];

       
        for (int i = 1; i <= n; i++) {
            p[i] = G[0][i - 1];
        }

        
        for (int i = 1; i < n; i++) {
            p[i + n] = G[i][n - 1];
        }

       
        int totalSum = (2 * n) * (2 * n + 1) / 2;
        int knownSum = 0;
        for (int i = 1; i < 2 * n; ++i) {
            knownSum += p[i];
        }
        p[0] = totalSum - knownSum;

       
        for (int i = 0; i < 2 * n; ++i)
            cout << p[i] << " ";
        cout << endl;
    }

    return 0;
}
