#include<bits/stdc++.h>
using namespace std;
int main(){

     long long i,m,n,x,ans,a[100001];
     while(cin>>n>>m){
        for(i=0;i<m;i++){

            cin>>a[i];
        }
        x=1,ans=0;
        for(i=0;i<m;i++){
            if(a[i]>=x){
                ans+=a[i]-x;
                x=a[i];
            }
            else{
                ans+=(n+a[i])-x;
                x=a[i];
                }
        }
        cout<<ans<<endl;
     }
return 0;}
