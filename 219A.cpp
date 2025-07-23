#include<bits/stdc++.h>
#include<regex>
#include<math.h>
using namespace std;
long long int po[1005][10];
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
set<ll>sc,ans;
int main()
{
    makefast__
    string ptr,str,uni;
    ll n,i,j,p,m,after,a,b,c,t,k;
    vector<pair<ll,ll>>cv;
    ll count[26];
    memset(count,0,sizeof(count));
    vector<ll>vl;
    char ch[101][101];
    char ch1;
    list<ll>lc;
    cin>>k;
    cin>>str;
    for(i=0; i<str.length(); i++)
    {
        count[str[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        if(count[i]!=0&&count[i]%k!=0)
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    for(i=0;i<26;i++)
    {
        if(count[i]!=0)
        {
            p=count[i]/k;
            while(p--)
            {
                ptr+=char(i+'a');
            }
        }
    }

while(k--)
{
    cout<<ptr;
}
cout<<endl;



}