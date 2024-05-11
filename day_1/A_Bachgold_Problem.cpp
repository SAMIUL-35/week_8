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
  ll n;
  cin>>n;
//   vector<bool>prim(n+1,true);
//   for (int i = 2; i*i <= n; i++)
//   {
//     if(prim[i])
//     {
//         for (int j = i+i; j <= n; j+=i)
//     {
//         prim[j]=false;
//     }
//     }
    
//   }
  int cnt=0;
// for (ll i = 2; i <= n; i++)
// {
//     if(prim[i])
//     {
//         // cout<<i<<"";
// cnt++;

//     }
// }
vector<int>v;
if(n%2==1)
{
    for (int i = 2; i <= n-3; i+=2)
{
    v.push_back(2);
    cnt++;
}
v.push_back(3);
cnt++;
}
else {
    for (int i = 2; i <= n; i+=2)
{
    v.push_back(2);
    cnt++;
}
}
cout<<cnt<<endl;
for(auto c:v)cout<<c<<" ";

    return 0;
}