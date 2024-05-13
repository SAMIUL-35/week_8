#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
ll gcd(ll a,ll b)
{
    return __gcd(a,b);
}
ll lcm(ll a,ll b)
{
    return ((a/gcd(a,b))*b);
}
int main ()

{
op();
  ll n,a,b,p,q;
  cin>>n>>a>>b>>p>>q;
  ll ans=0;
  ans+=(n/a)*p;
  ans+=(n/b)*q;
  ll overlap=n/lcm(a,b);
  ans-=min(p,q)*overlap;
  cout<<ans<<'\n';


    return 0;
}