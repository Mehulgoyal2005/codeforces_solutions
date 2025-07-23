#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI acos(-1)
#define R 510
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str[100];
    ll i,j,n,m,k,t;
    cin>>n;
    k=2*n;
    k-=2;
    for(i=1; i<=2*n; i++)
    {
        cout<<" ";
    }
    cout<<0<<endl;
    t=n;
    for(i=2; i<=t; i++)
    {
        for(j=1; j<=k; j++)
        {
            str[i]+=' ';
        }
        ll p;
        for(p=0; p<i; p++)
        {
            str[i]+=(p+'0');
            str[i]+=' ';
        }
        p-=2;
        for(;p>=0; p--)
        {
            str[i]+=(p+'0');
            if(p!=0)
            str[i]+=' ';
        }
        k-=2;
    }
    for(i=2; i<=t; i++)
    {
        cout<<str[i]<<endl;
    }
    for(i=0; i<=n; i++)
    {
        cout<<i<<" ";
    }
    for(i=n-1; i>=0; i--)
    {
        if(i!=0)
        cout<<i<<" ";
        else cout<<i<<endl;
    }
    //cout<<endl;
    for(i=t; i>=2; i--)
    {
        cout<<str[i]<<endl;
    }
    for(i=1; i<=2*n; i++)
    {
        cout<<" ";
    }
    cout<<0<<endl;
    return 0;
}