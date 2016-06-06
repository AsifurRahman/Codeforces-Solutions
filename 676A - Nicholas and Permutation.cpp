#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m,i;
    while(cin>>n)
    {
        ll a[n+2],pmx,pmn,dst1,dst2;
        for(i=1;i<=n;i++)
           {
             cin>>a[i];
             if(a[i]==1)
                pmn=i;
             if(a[i]==n)
                pmx=i;
           }
            dst1=max(abs(pmx-n),abs(pmx-1));
            dst2=max(abs(pmn-1),abs(pmn-n));

           cout<<max(dst1,dst2)<<endl;

    }
    return 0;
}

