#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'o' || ch == 'y' || ch == 'e' || ch == 'u' || ch == 'i';
}

int main() {
    string s;
    cin >> s;
    string result = "";

    for (char c : s) {
        if (!isVowel(c)) {
            result += '.';
            result += tolower(c);
        }
    }

    cout << result << endl;
    return 0;
}
