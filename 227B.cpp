#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<int, int> pos;

    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        pos[x] = i; // store 1-based index
    }

    int m;
    cin >> m;
    long long vasya = 0, petya = 0;

    for (int i = 0; i < m; ++i) {
        int b;
        cin >> b;
        vasya += pos[b];
        petya += (n - pos[b] + 1);
    }

    cout << vasya << " " << petya << endl;
    return 0;
}
