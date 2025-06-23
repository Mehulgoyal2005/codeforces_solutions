#include <iostream>
using namespace std;


long long get(long long k, long long req, long long drop) {
    if (k < req) return 0;
    return (k - req) / drop + 1;
}

long long solve(long long k, long long a, long long b, long long x, long long y) {
   
    long long cnt1 = get(k, a, x);
    long long temp1 = k - cnt1 * x;
    long long cnt2 = get(temp1, b, y);
    long long total1 = cnt1 + cnt2;

    // Try cooking type B first
    long long cnt3 = get(k, b, y);
    long long temp2 = k - cnt3 * y;
    long long cnt4 = get(temp2, a, x);
    long long total2 = cnt3 + cnt4;

    return max(total1, total2);
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        long long k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;
        cout << solve(k, a, b, x, y) << '\n';
    }
    return 0;
}
