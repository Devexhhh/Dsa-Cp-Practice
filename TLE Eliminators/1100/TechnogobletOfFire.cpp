#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll a[1000],b,c,d,e,f,x,y,k,t,q,p,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v[1000];
    queue<ll>qu;
    map<ll,ll>mp;
    cin>>n>>m>>k;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    ll index[1000];
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        //index[aarray[i]]=a[i];
        v[a[i]].push_back(aarray[i]);
    }
    for(i=1; i<=m; i++)
    {
        sort(v[i].begin(),v[i].end());
    }
    //cout<<k<<endl;
    for(i=1; i<=k; i++)
    {
        cin>>l;
        ll kk=v[a[l]].size();
        if(aarray[l]!=v[a[l]][kk-1])
            A++;
    }
    cout<<A<<endl;

    return 0;
}