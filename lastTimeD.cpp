#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

struct Casino {
    int l, r, reali;
};

bool  compareCasinos(const  Casino &a, const  Casino  &b) {
    return a.l < b.l;
}

void solve() {

    int n , k;
    cin >>  n >> k;
    vector<Casino>  casinos(n);
    for (int i = 0 ; i < n ; ++i) {
        cin >> casinos[i].l >>  casinos[i].r >> casinos[i].reali;
    }

  
    sort(casinos.begin(),  casinos.end(), compareCasinos);

 
    priority_queue<pair<int, int>>  maxHeap; // stores (reali, index)

    int current =  k;
    int ptr  =  0; 

    while (true)  {
     
        while ( ptr < n && casinos[ptr].l <= current) {
            if ( casinos[ptr].r >= current) {
                 maxHeap.push({casinos[ptr].reali, ptr});
            }
             ptr++;
        }

        if ( maxHeap.empty()) {
            break;
        }

        auto  top = maxHeap.top();

        maxHeap.pop();
        
        int reali  = top.first;

        if (reali >  current) {
            current  = reali;
        } else {
             
            break;
        }
    }

    cout << current << endl;
}

int main() {


    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}