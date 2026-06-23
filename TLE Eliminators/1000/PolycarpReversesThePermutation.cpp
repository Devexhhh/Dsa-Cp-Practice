#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI acos(-1)
#define R 510
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int ;
using dl =double;
using ld=long double;
using ull=unsigned long long;
const long N = 3e5 + 10;
const long maxn=5e5+10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v,v1;
    deque<ll>one,two,three,four,ta,five,cur;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>l;
        one.push_back(l);
        aarray[i]=l;
        v.push_back(l);
    }
    ll flag;
    cur=one;
    while((ll)one.size())
    {
        if(one.size()==1)
        {
            two.push_back(one.front());
            three.push_front(one.front());
            one.pop_front();
        }
        else
        {
            ll a=one.front();
            ll b=one.back();
            if(a<b)
            {
                two.push_front(a);
                three.push_front(a);
                one.pop_front();
            }
            else two.push_back(b),one.pop_back(),three.push_back(b);

        }
    }
    four=two;
    five=three;
    while(two.size())
    {
        if(two.size()==1)
        {
            ll a=two.front();
            if(a==aarray[n])
            {
                ta.push_back(a);
            }
            else ta.push_front(a);
            two.pop_front();
        }
        else
        {
            ll a=two.front();
            ll b=two.back();
            if(a<b)
            {
                ta.push_front(a);
                two.pop_front();

            }
            else ta.push_back(b),two.pop_back();


        }
    }
    if(ta==cur)
    {
        while(four.size())
        {
            cout<<four.front()<<" ";
            four.pop_front();
        }
        cout<<"\n";
        return ;
    }
    ta.clear();
    while(three.size())
    {
        if(three.size()==1)
        {
            ll a=three.front();
            if(a==aarray[n])
            {
                ta.push_back(a);
            }
            else ta.push_front(a);
            three.pop_front();
        }
        else
        {
            ll a=three.front();
            ll b=three.back();
            if(a<b)
            {
                ta.push_front(a);
                three.pop_front();

            }
            else ta.push_back(b),three.pop_back();


        }
    }
    if(ta==cur)
    {
        while(five.size())
        {
            cout<<five.front()<<" ";
            five.pop_front();
        }
        cout<<"\n";
        return ;
    }
    cout<<-1<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //no test case in interactive ,check it idiot
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
