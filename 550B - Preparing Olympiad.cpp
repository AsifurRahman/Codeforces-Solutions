#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j,x,l,r,n,m,mx,mn,sum,val,ans,a[100001];
    while(cin>>n>>l>>r>>x)
    {
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ans=0;
        for(i=0; i<(1<<n); i++)
        {
            mx=-1;
            mn=1000000;
            sum=0;
            for(j=0; j<n; j++)
            {
                if(i&(1<<j))
                {
                    sum+=a[j];
                    mx=max(mx,a[j]);
                    mn=min(mn,a[j]);
                }
            }
            if(l<=sum && sum<=r && (mx-mn)>=x)
                ans++;
        }
        cout<<ans<<endl;

    }
    return 0;
}
