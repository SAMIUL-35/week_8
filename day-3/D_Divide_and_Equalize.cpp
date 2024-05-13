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
  int t;
  cin>>t;
  while (t--)
  {
   int n;
   cin>>n;
   vector<int>v(n);
   for (int i = 0; i < n; i++)
   {
    cin>>v[i];
   }
   map<int,int>m;

   for (int i = 0; i < n; i++)
   {
    for (int j= 2;j* j <=v[i]; j++)
    {
        if(v[i]%j==0)
        {
            while (v[i]%j==0)
            {
               m[j]++;
               v[i]=v[i]/j;
            }
            
        }
    }
    if(v[i]>1)
    {
        m[v[i]]++;
    }}
   
    bool ok = true;

       for(auto x:m)
       {
        if(x.second%n!=0)
        {
            ok=false;
            break;
        }
       }



        if (ok) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
  }
  


    return 0;
}