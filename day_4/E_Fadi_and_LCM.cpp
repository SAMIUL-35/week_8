#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long gcd(int a,int b)
{
    return __gcd(a,b);
}
long long lcm(int a, int b)
{
    int c=(a*b)/gcd(a,b);
    return c;
}

int main()
{
   long long n;
   cin>>n;
   vector<int>v;
   for(long long i=1;i*i<=n;i++)
   {
       if(n%i==0)
       {
           v.push_back(i);
        //   if((n/i)!=i)
        //   {
        //       v.push_back(n/i);
        //   }
       }
   }
   sort(v.begin(),v.end(),greater<int>());
   for(auto x:v)
   {
       if(lcm(x,n/x)==n)
       {
           cout<< n/x<<" "<<x;
           break;
       }
   }
cout<<endl;
    return 0;
}