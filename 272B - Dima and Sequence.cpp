///BISMILLAHIR RAHMANIR RAHIM///
///******ASIFUR RAHMAN******///
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,i;
    while(cin>>n){
            ll x;
        vector<ll>v;
        for(i=0;i<n;i++){
            cin>>x;
            v.push_back(__builtin_popcount(x));
        }
        sort(v.begin(),v.end());
        ll cnt=1,pair=0;
        for(i=0;i<v.size();i++){
                if(v[i]==v[i+1]){
                    cnt++;
                }
                else{
                    pair+=(cnt*(cnt-1))/2;
                    cnt=1;
                }
        }
            pair+=(cnt*(cnt-1))/2;
        cout<<pair<<endl;
    }
    return 0;
}
