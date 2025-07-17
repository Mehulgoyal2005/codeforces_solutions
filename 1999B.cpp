#include <bits/stdc++.h>
using namespace std;

int solve(){
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
 
    vector<pair<int, int>> suneetCards = {{a1, a2}, {a2, a1}};
    vector<pair<int, int>> slavicCards = {{b1, b2}, {b2, b1}};
 
    int winCount = 0;
 
    for (auto suneet : suneetCards) {
        for (auto slavic : slavicCards) {
            int suneetWins = 0;
            int slavicWins = 0;
         if (suneet.first > slavic.first) {
                suneetWins++;
            } else if (suneet.first < slavic.first) {
                slavicWins++;
            }
            if (suneet.second > slavic.second) {
                suneetWins++;
            } else if (suneet.second < slavic.second) {
                slavicWins++;
            }
 
            if (suneetWins > slavicWins) {
                winCount++;
            }
        }
    }
 
    cout << winCount << endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}