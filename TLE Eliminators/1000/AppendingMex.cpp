#include<bits./stdc++.h>
using namespace std;
#define ll long long int
int main()
{
     ll n;
     cin>>n;
     ll max_element = -1;
     ll x; ll flag=0;
     for(ll i=0;i<n;i++)
     {
          cin>>x;
          if(x>max_element+1)
          {
               cout<<i+1;
               flag=1;
               break;
          }
          
          max_element = max(max_element,x);
     }
     
     if(flag==0)
     cout<<-1;
}