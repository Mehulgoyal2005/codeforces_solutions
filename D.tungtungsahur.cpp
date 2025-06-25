#include <bits/stdc++.h>
using namespace std;

bool isPossible( string& p, string& s) {
    int i = 0, j = 0;
    int n = p.size(), m = s.size();
    
    while (i < n && j < m) {
        char cur = p[i];
        if (s[j] != cur) return false;

        
        int countp = 0;
        while (i < n && p[i] == cur) {
            countp++;
            i++;
        }

        
        int counts = 0;
        while (j < m && s[j] == cur) {
            counts++;
            j++;
        }

        if (counts < countp || counts > 2 * countp) return false;
    }

    return i == n && j == m; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string p, s;
        cin >> p >> s;
        cout << (isPossible(p, s) ? "YES" : "NO") << '\n';
    }
    return 0;
}
