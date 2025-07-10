#include <iostream>
using namespace std;

int main() {
    string table;
    cin >> table;

    bool can_play = false;
    for (int i = 0; i < 5; ++i) {
        string card;
        cin >> card;
        if (card[0] == table[0] || card[1] == table[1]) {
            can_play = true;
        }
    }

    cout << (can_play ? "YES" : "NO") << endl;
    return 0;
}
