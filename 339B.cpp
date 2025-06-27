#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> tasks(m);
    for (int i = 0; i < m; ++i) {
        cin >> tasks[i];
    }

    long long time = 0;
    int current = 1;

    for (int i = 0; i < m; ++i) {
        if (tasks[i] >= current) {
            time += tasks[i] - current;
        } else {
            time += n - current + tasks[i];
        }
        current = tasks[i];
    }

    cout << time << endl;
    return 0;
}
