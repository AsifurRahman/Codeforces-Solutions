#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,i,k,h;
    while(cin>>n>>h>>k)
    {
        ll a[n+1];
        for(i=0; i<n; i++)
            cin>>a[i];
        ll cnt=0,sum=0,mod=k;
        for(i=0; i<n; i++)
        {
            if(sum+a[i]>h)
            {
                cnt+=sum/mod;
                sum=sum%mod;
                if(sum+a[i]>h)
                {
                    sum=a[i];
                    cnt++;
                }
                else
                    sum+=a[i];
            }
            else
                sum+=a[i];
        }
        cnt+=sum/mod;
        if(sum%mod>0)
            cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}
