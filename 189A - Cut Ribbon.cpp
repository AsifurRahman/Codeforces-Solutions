#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,j,a,b,c,n,k,ans,rem;
    while(cin>>n>>a>>b>>c)
    {
          ans=0;
       for(i=0;i*a<=n;++i)
       {
           for(j=0;i*a+j*b<=n;++j)
           {
                rem=n-i*a-j*b;
                if(rem%c==0)
                {
                    k=rem/c;
                ans=max(ans,i+j+k);}
           }

       }
       cout<<ans<<endl;
    }
    return 0;
}
