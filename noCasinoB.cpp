#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)  {
        int n, k;
        cin >> n   >> k;
        vector<int>  a(n);
        for (int &x  : a) cin >> x;

        int hikes  = 0;
        int i = 0 ;

        while (i  <= n - k) {
            bool  canHike = true;

            for (int  j = i; j < i + k; ++j) {
                if (a[j]  == 1) {
                    canHike  = false;
                    i = j  + 1; // skip to the day after the rainy one
                    break ;
                }
            }

            if ( canHike ) {
                hikes++;
                i += k + 1; // move to the day after the break day
            }
        }

        cout << hikes << '\n';
    }

    return 0;
}
