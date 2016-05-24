#include<bits/stdc++.h>
using namespace std;
struct point{
  long long m,f;
} p[1000000];
bool com(point l, point r)

{
    return l.m<r.m;
}
int main()
{
    long long x,nw,n,ans,i,j,df,d;
    while(cin>>n>>d)
    {
        for(i=0;i<n;i++)
        {
            cin>>p[i].m>>p[i].f;
        }
         sort(p,p+n,com);
         long long sum=0;
         for(i=0;i<n;i++)
         {
             sum+=p[i].f;
             p[i].f=sum;

         }
         j=-1;
         ans=0,p[j].m=0;
         for(i=0;i<n;i++)
         {
             if(p[i].m-p[j].m<d)
                df=p[i].m-p[j].m;
              else
             {
                 df=p[i].m-p[j].m;
                 while(df>=d)
                 {
                     j++;
                     df=p[i].m-p[j].m;
                 }
             }
             ans=max(ans,p[i].f-p[j-1].f);

         }
         cout<<ans<<endl;
    }
    return 0;
}
