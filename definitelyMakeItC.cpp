#include <bits/stdc++.h>
using namespace std;

#define int long long

bool canReachMaxHeightTower(int n, int k, vector<int>& h) {
    
    int waterlevel = 1 ;
    int time_available = h[k-1] - waterlevel + 1 ;
    int current_height = h[k-1];
    int maxHeight = *max_element(h.begin(), h.end());
    int time_taken ;

    while(current_height != maxHeight)
    {   
        int local_max = 0 ; 
        int jumptoindex  =  -1 ;
        for(int i = 0 ; i< n ; i++)
        {
                if( h[i] - current_height <= time_available )
                {
                    if(  h[i] - current_height > local_max )
                    {
                        local_max = h[i] - current_height ;
                        jumptoindex = i ;
                    }
                }
                time_taken = local_max;
        }

        if(jumptoindex == -1 )
        {
            return false ;
        }

        current_height  = h[jumptoindex];
        waterlevel += time_taken;
        time_available = current_height - waterlevel +1 ;
    }

    return true ;


    // int currPos = k - 1;
    // int time = 0;
    // vector<int> idx;
    // int maxHeight = *max_element(h.begin(), h.end());

    // // All indices where tower has max height
    // for (int i = 0; i < n; ++i) {
    //     if (h[i] == maxHeight) idx.push_back(i);
    // }

    // for (int target : idx) {
    //     int curHeight = h[currPos];
    //     int t = abs(curHeight - h[target]);
    //     // During teleport, water rises by t
    //     if (time + t < h[currPos]) return true;
    // }

    // return false;
}

int32_t main() {

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> h(n);
        for (int i = 0; i < n; ++i) cin >> h[i];

        if (canReachMaxHeightTower(n, k, h)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
