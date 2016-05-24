#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,j,n,a[10001];
    while(cin>>n)
    {
        for(i=1; i<=n; i++){
            cin>>a[i];
        }
        ll cnt,ans=0;
        for(i=n;i>=2;i--){
                 cnt=0;
            for(j=1;j<i;j++){
                if(a[i]<a[j])
                    cnt++;
                else
                    break;
            }
            if(cnt==i-1)
                ans++;
    }
        for(i=n;i>=2;i--){
                cnt=0;
            for(j=1;j<i;j++){
                if(a[i]>a[j])
                    cnt++;
                else
                    break;
            }
            if(cnt==i-1)
                ans++;
    }
        cout<<ans<<endl;
    }
    return 0;
}
