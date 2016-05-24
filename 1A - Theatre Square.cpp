#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double n,m,x,a,b;
    long long ans;
    while(cin>>n>>m>>a)
    {
      b=n*m;
      ans=ceil(m/a)*ceil(n/a);
      cout<<ans<<endl;
    }
    return 0;
}
