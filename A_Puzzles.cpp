#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define all(c) c.begin(),c.end()
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] "
#define mp(x,y) make_pair(x,y)
#define pb push_back
#define f first
#define s second
 
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}
 
const long long INF=1e18;
const int32_t mod=1e9+7;
 
const int N=5e5+5;
 
ll gcd(ll a, ll b)
{
    if (a == 0)
    return b;
    return gcd(b % a, a);
}
 
void solve(){  

       int a,b;
       cin>>a>>b;
       int arr[b];
       for(int i=0;i<b;i++)
       {
           cin>>arr[i];

       }
       sort(arr,arr+b);
       int ans, m =arr[b-1]-arr[0];
       for(int i=a;i<=b;i++)
       { 
           ans=arr[i-1]-arr[i-a];
           ans=abs(ans);
           m=min(m,ans);
           
       }
     cout<<m;
      
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
 
    int  t=1;
 
    //cin>>t;
 
    while(t--){
    solve(); 
    }
 
    return 0;
}