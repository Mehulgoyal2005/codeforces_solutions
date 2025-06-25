#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>>t ;
    while(t--)
    {
        int n ;
        cin>> n;
        string s ;
        cin>> s ;
        int a = n;

        for(int i = 0 ; i< a/2 ; i++)
        {
        if( ((s[i]=='0') && (s[a-1-i]=='1')) || ((s[i]=='1')&&(s[a-1-i]=='0')))
        {      
            n = n - 2;
        }
        else{
            break;
        }
    }
        cout << n << endl ;
    }
    return 0 ; 
}