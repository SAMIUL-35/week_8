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
double x,y;
x=a*log(b);
    y=b*log(a);
if(a==b)cout<<"="<<endl;
else 
{
    
    if(x==y)cout<<"="<<endl;
    else if(x>y)cout<<"<"<<endl;
    

else cout<<">"<<endl;
    
}

    return 0;
}