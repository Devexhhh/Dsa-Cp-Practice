
/*    #include <regex>
    ...
    std::string string("hello $name");
    string = std::regex_replace(string, std::regex("\\$name"), "Somename");
    */
#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
ll aarray[100000+10];
ll magic[501][501];
ll ans[200000+10];
ll ar[200000+10];
int main()
{
    makefast__
    string ptr,str,uni;
    ll b,u,l,B,n,a,c=0,m,d,e,i,j,whitecost,blackcost,sum=0,tower,floor,q;
    dl sumblue=0,sumred=0;
    vector<ll>vp,ph;
    set<ll>sc;
    char ch;
    ll countA[10000];
    ll countB[10000];
    memset(countA,0,sizeof(countA));
    memset(countB,0,sizeof(countB));
    cin>>n>>whitecost>>blackcost;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    a=n/2;
    for(i=1,j=n; i<=a; i++,j--)
    {
        if(aarray[i]==0)
        {
            if(aarray[j]==1)
            {
                cout<<-1<<endl;
                return 0;
            }
            if(aarray[j]==2)
            {
                sum+=whitecost;
            }
        }
        if(aarray[i]==1)
        {
            if(aarray[j]==0)
            {
                cout<<-1<<endl;
                return 0;
            }
            if(aarray[j]==2)
            {
                sum+=blackcost;
            }
        }
        if(aarray[i]==2)
        {
            if(aarray[j]==1)
            {
                sum+=blackcost;
            }
            if(aarray[j]==0)
                sum+=whitecost;
            if(aarray[j]==2)
            {
                sum+=2*(min(whitecost,blackcost));
            }
        }

    }
        if(n%2!=0)
        {
            ll md;
            md=(n+1)/2;
            if(aarray[md]==2)
            {
                sum+=min(whitecost,blackcost);
            }
}


    cout<<sum<<endl;

}