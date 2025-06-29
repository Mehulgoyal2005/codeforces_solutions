#include <iostream>
using namespace std;

// Function to calculate digit sum
int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int k;
    cin >> k;

    int count = 0;
    int num = 19;  // Smallest number with digit sum 10 is 19

    while (true) {
        if (digitSum(num) == 10) {
            count++;
            if (count == k) {
                cout << num << '\n';
                break;
            }
        }
        num++;
    }

    return 0;
}
