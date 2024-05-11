#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);


int main ()

{
op();
  ll n,k;
  cin>>n>>k;
  vector<ll>divs;

  for (ll i = 1; i*i <=n; i++)
  {
    if(n%i==0)
    {
        divs.push_back(i);
        if(n/i!=i)
        {
             divs.push_back(n/i);
        }
    }
  }
  sort(divs.begin(),divs.end());
  if(k<=divs.size())cout<<divs[k-1]<<endl;
  else cout<<-1<<endl;



    return 0;
}