
#include<bits/stdc++.h>
using namespace std;
int main(){

     long long i,j,n,m,a,b,cnt;
     while(cin>>n)
     {
         long long f[10000],a[1000];
         memset(f,0,sizeof(f));
         for(i=0;i<n;i++)
         {
             cin>>a[i];
             f[i]=0;
         }
         sort(a,a+n);
          cnt=0;
         for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(f[j]==0&&a[i]<a[j])
                {
                        cnt++;
                        f[j]=1;
                        break;
                }
            }
         }
         cout<<cnt<<endl;
     }
     return 0;
}
