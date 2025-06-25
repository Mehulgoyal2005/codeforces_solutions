#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        if (m == n) {
            cout << l << " " << r << endl;
        } else{
       int newr = 0 ;
       int newl = 0 ;
       while(m!=0)
       {
        if(newr <  r)
        {
        newr++;
        m--;
        }
        else{
            newl--;
            m--;
        }
       }
       cout << newl << " " << newr << endl;
    }
}

    return 0;
}
