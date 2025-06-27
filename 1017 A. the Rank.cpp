#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0;
    int a,b,c,d;
    int s[1001];
    cin>>n;
    for(i=0; i<n; i++){
        int sum=0;
        cin>>a>>b>>c>>d;
        sum=a+b+c+d;
        s[i]=sum;
    }

    int sm=s[0];

    sort( s ,s+n , greater<int>() );
    for(int i=0; i<n; i++)
    {
        if(  sm == s [i])
        {
            
            cout<<i+1<<endl;
            break;
        }
    }

    return 0;
}