#include<bits/stdc++.h>
using namespace std;
int main(){

    long long ans,i,j,n,m;
    vector<long long>v;
    while(cin>>n)
    {
       for(i=1;i*i<=n;i++)
       {
           if(n%i==0)
           {
               v.push_back(i);
               v.push_back(n/i);
           }
       }
       sort(v.begin(),v.end());
       m=v.size();
       for(i=m-1;i>=0;i--)
       {
           int flag=1;
           for(j=2;j*j<=v[i];j++)
           {
               if(v[i]%(j*j)==0)
               {
                   flag=0;break;
               }
           }
           if(flag==1)
            {
                ans=v[i];break;
            }

       }
       cout<<ans<<endl;
    }
return 0;
}
