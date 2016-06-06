///BISMILLAHIR RAHMANIR RAHIM///
///******ASIFUR RAHMAN******///
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll i,n,Box;
    while(cin>>Box>>n){
            pair<ll,ll>M[100];
        for(i=0;i<n;i++){
            cin>>M[i].first>>M[i].second;
        }
        sort(M,M+n);
        reverse(M,M+n);
        for(i=0;i<n;i++){
            cout<<M[i].first<<" "<<M[i].second<<endl;
        }
        ll ans=0;
        for(i=0;i<n;i++){
            if(M[i].first<=Box){
                ans+=(M[i].first)*(M[i].second);
                Box-=M[i].first;
            }
            else{
                ans+=Box*(M[i].second);
                Box=0;
            }
            if(Box<=0)
                break;
        }
        cout<<ans<<endl;
    }
    return 0;
}

