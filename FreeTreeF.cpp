
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<long long> solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    vector<vector<pair<int, int>>> adj(n + 1);

    long long total_cost = 0;
    for (int i =  0; i <  n - 1; ++i) {
        int u, v, c;
        cin >>  u >>  v >> c;

        adj[u].emplace_back(v, c);

        adj[v].emplace_back(u, c);

        if (a[u] != a[v]) {
            total_cost += c;
        }
    }

    vector<long long> results;
    while (q--) {
        int v, x;
        cin >> v >> x;
        if (a[v] == x) {
            results.push_back(total_cost);
            continue;
        }

        for (auto it  : adj[v]) {
            int u = it.first ;
            int c = it.second;
            if (a[u] == a[v]) {
                total_cost += c;
            } else if (a[u] == x) {
                total_cost -= c;
            }
        }
        a[v] = x;
        results.push_back(total_cost);
    }

    return results;
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        vector<long long> results = solve();
        for (long long res : results) {
            cout << res << '\n';
        }
    }

    return 0;
}