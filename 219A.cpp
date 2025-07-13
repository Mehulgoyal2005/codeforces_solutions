#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int k;
    string s;
    cin >> k >> s;

    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    string part = "";
    for (auto& p : freq) {
        if (p.second % k != 0) {
            cout << "-1\n";
            return 0;
        }
        part += string(p.second / k, p.first);
    }

    string result = "";
    for (int i = 0; i < k; i++) {
        result += part;
    }

    cout << result << endl;
    return 0;
}
