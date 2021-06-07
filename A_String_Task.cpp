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

      string s;
      cin>>s;
      
      int p = s.size();
    
      vector<char> v,v1;
      
      for(int i=0;i<p;i++)
      {
          if(s[i]!='A'&& s[i]!='a'&& s[i]!='O'&& s[i]!='o'&& s[i]!='Y'&& s[i]!='y'&& s[i]!='E'&& s[i]!='e'&& s[i]!='U'&& s[i]!='u'&& s[i]!='I'&& s[i]!='i')
          {
              char c=s[i];
              v.push_back(c);
          } 
      }
      
         for(int i=0;i<v.size();i++)
          {
              if(v[i]>=65 && v[i]<=90)
              {
                  v[i]=v[i]+32;
              }
          }
        
          int t=v.size();
       
       for(int i=0;i<t;i++)
       {
           char z='.';
           v1.push_back(z);
           v1.push_back(v[i]);
       }

       for(int i=0;i<v1.size();i++)
       {
           cout<<v1[i];
       }
      
      cout<<endl;

}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
 
    solve(); 
 
    return 0;
}