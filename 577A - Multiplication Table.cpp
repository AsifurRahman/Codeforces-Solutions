#include<bits/stdc++.h>
using namespace std;
int main()
{
   long int x,m,n,i,ans;
   while(cin>>m>>n)
   {
       ans=0;
       if(m>n)
         m=n;
       for(i=m;i>=1;i--)
       {
           if(n/i>m)
            break;
           if(n%i==0)
            ans=ans+1;
       }
       cout<<ans<<endl;
   }
return 0;
}
