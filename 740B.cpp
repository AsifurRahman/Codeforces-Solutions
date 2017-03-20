///Bismillahir Rahmanir rahim///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ll i,j,n,m,x,cnt;
    while(cin>>n>>m)
    {
        ll a[n+2],l[m+2],r[m+2];
        bool f[m+1];
        memset(f,0,sizeof(f));
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(i=1; i<=m; i++)
        {
            cin>>l[i]>>r[i];
            ll sum=0;
            for(j=l[i];j<=r[i];j++){
                sum+=a[j];
            }
            if(sum>0)
                f[i]=1;
        }
        ll ans=0;
        for(i=1; i<=n; i++)
        {
            x=a[i];
            cnt=0;
            for(j=1; j<=m; j++)
            {
                if(f[j]==1){
                    if(i>=l[j] && i<=r[j]){
                        cnt++;
                    }
                }
            }
            ans+=x*cnt;
        }
        cout<<ans<<endl;
    }
    return 0;
}

