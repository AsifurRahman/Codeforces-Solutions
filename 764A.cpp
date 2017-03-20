///Bismillahir Rahmanir rahim///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ll i,j,x,y,n;
    while(cin>>x>>y>>n){
            ll ans=0;
        for(i=1;i<=n;i++){
            if(i%x==0 && i%y==0){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

