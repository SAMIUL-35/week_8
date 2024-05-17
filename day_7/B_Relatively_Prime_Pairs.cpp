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
  ll a,b;
  cin>>a>>b;
  cout<<"YES"<<endl;
  for (ll i = 0; i<(b-a)/2+1; i++)
  {
    cout<<a+i*2<<" "<<a+i*2+1<<endl;
  }
  


    return 0;
}