#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n;
        cin >> n;
        vector<int> roundNumbers;

        int place = 1;  // To track position: ones, tens, hundreds...

        // Extract round numbers from n
        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                roundNumbers.push_back(digit * place);
            }
            n /= 10;
            place *= 10;
        }

        // Output the result
        cout << roundNumbers.size() << endl;
        for (int num : roundNumbers) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
