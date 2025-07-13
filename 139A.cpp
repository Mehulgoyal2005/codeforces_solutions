#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n; // total number of pages

    vector<int> pages(7);
    for (int i = 0; i < 7; ++i) {
        cin >> pages[i]; // pages read per day
    }

    int day = 0;
    while (true) {
        n -= pages[day];
        if (n <= 0) {
            cout << day + 1 << endl; // days are 1-indexed
            break;
        }
        day = (day + 1) % 7; // go to next day (wrap around after Sunday)
    }

    return 0;
}
