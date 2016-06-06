///BISMILLAHIR RAHMANIR RAHIM///
///******ASIFUR RAHMAN******///
#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct data{
    ll mat,box;
}
M[21];

bool cmp(data f,data s){
       if(f.mat>s.mat)return true;
       return false;
}
int main()
{
    ll i,n,Box;
    while(cin>>Box>>n){
        for(i=0;i<n;i++){
            cin>>M[i].box>>M[i].mat;
        }
        sort(M,M+n,cmp);
        ll ans=0;
        for(i=0;i<n;i++){
            if(M[i].box<=Box){
                ans+=(M[i].box)*(M[i].mat);
                Box-=M[i].box;
            }
            else{
                ans+=Box*(M[i].mat);
                Box=0;
            }
            if(Box<=0)
                break;
        }
        cout<<ans<<endl;
    }
    return 0;
}

