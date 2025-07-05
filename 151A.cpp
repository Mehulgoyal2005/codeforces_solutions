#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink = k * l;
    int total_slices = c * d;
    int total_salt = p;

    int toast_from_drink = total_drink / (n * nl);
    int toast_from_slices = total_slices / n;
    int toast_from_salt = total_salt / (n * np);

    int result = min({toast_from_drink, toast_from_slices, toast_from_salt});
    cout << result << endl;

    return 0;
}
