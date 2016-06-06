#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,i;
    while(cin>>n)
    {
        ll a[n+1];
        char s[n+1];
        for(i=0; i<n; i++){
            cin>>s[i]>>a[i];
        }
        bool f[1000001];
        memset(f,0,sizeof(f));
        ll ans=0,state=0;
        for(i=0; i<n; i++)
        {
            if(s[i]=='+'){
                f[a[i]]=1;
                state++;
            }
            else{
                if(f[a[i]]==1){
                    state--;
                    f[a[i]]=0;
                }
                else{
                    ans++;
                    f[a[i]]=0;
                }
            }
            ans=max(state,ans);
        }
           cout<<ans<<endl;
   }
return 0;
}
