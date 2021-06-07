//#include <boost/multiprecision/cpp_int.hpp>
#include "bits/stdc++.h"
//using namespace boost::multiprecision; 
using namespace std;
#define MODULO 1000000007
#define PI 3.14159265359
typedef long long int ll;
ll coc(ll n,ll m,ll k)
{
    ll x,y;
    x=k%n;
    y=k/n;
    if(k%n!=0)
    y++;
    //cout<<"x= "<<x<<" y="<<y<<endl;
    ll res=0;
    if(x==0)
    x=n;
    res=y+(x-1)*m;
    return res;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        cout<<coc(n,m,k)<<endl;
    }
    return 0;
}