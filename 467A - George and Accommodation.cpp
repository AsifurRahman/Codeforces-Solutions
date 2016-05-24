
#include<bits/stdc++.h>
using namespace std;
#define pi acos(0.0)
#define mem(a,m) memset(a,n,sizeof(a))
#define fr(i,n) for(__typeof(n) i=0;i<n;i++)
#define ll long long
int main()
{
    ll x,y,z,n,i,j,t,T,flag;
    ll a[10000];
    while(cin>>T)
    {
        z=0;
        fr(t,T)
        {
            cin>>x>>y;
            if(y>=(x+2))
                z++;
        }
        cout<<z<<endl;
    }
    return 0;
}
