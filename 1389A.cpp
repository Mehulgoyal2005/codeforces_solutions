#include <iostream>
using namespace std;
int main() {
    int num; cin>>num;
    for(int i=0; i<num; i++){
        int x,y; cin>>x>>y;
        if(x*2<=y)cout<<x<<" "<<x*2<<endl;
        else cout<<-1<<" "<<-1<<endl;

    }
    return 0;
}