#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<char> numbers;

    // Extract numbers from the string
    for (int i = 0; i < s.size(); i += 2) {
        numbers.push_back(s[i]);
    }

    // Sort the numbers
    sort(numbers.begin(), numbers.end());

    // Print the sorted sum
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i];
        if (i != numbers.size() - 1) {
            cout << "+";
        }
    }

    cout << endl;
    return 0;
}
