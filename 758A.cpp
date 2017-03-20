///***Bismillahir Rahmanir Rahim***///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define mem(a,n) memset(a,n,sizeof(a))
int main()
{
    ll i,j,n,m,cnt,ans;
    scanf("%lld",&n);
    ll mx=0,a[n+1];
    for(i=0;i<n;i++){
        cin>>a[i];
        mx=max(a[i],mx);
    }
    ans=0;
    for(i=0;i<n;i++){
        ans+=mx-a[i];
    }
    cout<<ans<<endl;
    return 0;
}

