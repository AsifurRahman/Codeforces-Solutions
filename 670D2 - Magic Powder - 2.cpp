#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
ll i,n,k,a[100001],b[100001];
ll fnd(ll val)
{
    ll m=0;
    for(i=0;i<n;i++){
        if(a[i]*val>b[i])
               m+=val*a[i]-b[i];
    }
    if(m>k)
        return 0;

    return 1;
}
int main()
{
    while(cin>>n>>k)
    {
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        ll low,mid,high,ans=0;
        low=0;
        high=200000000000;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(fnd(mid))
                {
                    ans=mid;
                    low=mid+1;
                }
            else
                high=mid-1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
